/**
* Copyright (c), 2015-2025
* @file gui_2d_lib.c
* @brief 2dͼ�ο����ļ�
* @author
* @date
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_2d_lib.h"
#include "string.h"
#include "tftlcd.h"
/*********************************************************************
*							���ݽṹ
**********************************************************************/

#pragma pack(1)

/**
* @brief �ļ�ͷ
*/

struct _Bmp_File_Header
{
	//�ļ���־
	uint16_t type;
	//�ļ���С
	uint32_t size;
	//����
	uint16_t reserved1;
	//����
	uint16_t reserved2;
	//λͼƫ����
	uint32_t offbits;
};

/**
* @bri��Ϣͷ
*/

struct _Bmp_Info_Header
{
	//��Ϣͷ��С
	uint32_t size;
	//λͼ���
	uint32_t width;
	//λͼ�߶�
	uint32_t height;
	//λͼ��λ����
	uint16_t planes;
	//ÿ�����ص����������λ����24��
	uint16_t offbits;
	//ѹ���㷨
	uint32_t compression;
	//λͼ�����ֽ���
	uint32_t size_image;
	//������/�׵ĵ�λ��ʾˮƽ�ֱ���
	uint32_t xpe_is_per_meter;
	//������/�׵ĵ�λ��ʾ��ֱ�ֱ���
	uint32_t ype_is_per_meter;
	//λͼʹ�õ���ɫ��
	uint32_t color_used;
	//ָ����Ҫ��ɫ��
	uint32_t color_important;
};

#pragma pack()

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ����ˮƽ����
* @param y:yλ��
* @param x0:x��ʼλ��
* @param x1:x����λ��
*/

void gui_draw_hline(uint16_t y,uint16_t x0,uint16_t x1)
{
	uint16_t x = 0;
	
	for (x = x0;x <= x1;x++)
	{
		gui_interface_draw_pixel(x,y,1);
	}
}

/**
* @brief ���ƴ�ֱ����
* @param x:xλ��
* @param y0:y��ʼλ��
* @param y1:y����λ��
*/

void gui_draw_vline(uint16_t x,uint16_t y0,uint16_t y1)
{
	uint16_t y = 0;
	
	for (y = y0;y <= y1;y++)
	{
		gui_interface_draw_pixel(x,y,1);
	}
}

/**
* @brief ��������
* @param x0:x��ʼλ��
* @param y0:y��ʼλ��
* @param x1:x����λ��
* @param y2:y����λ��
*/

void gui_draw_line(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1)
{
	float a = 0;
	float b = 0;
	float xx0 = x0;
	float yy0 = y0;
	float xx1 = x1;
	float yy1 = y1;
	uint16_t x = 0;
	uint16_t y = 0;
	
	a = (yy0 - yy1) / (xx0 - xx1);
	b = yy0 - (yy0 - yy1) * x0 / (x0 - x1);
	
	for (x = x0;x <= x1 - x0;x++)
	{
		y = a * x + b;
		gui_interface_draw_pixel(x,y,1);
	}
}

/**
* @brief ���ƾ���
* @param x0:���Ͻ�x����
* @param y0:���Ͻ�y����
* @param x1:���Ͻ�x����
* @param y2:���Ͻ�y����
*/

void gui_draw_rect(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1)
{
	gui_draw_hline(y0,x0,x1);
	gui_draw_hline(y1,x0,x1);
	gui_draw_vline(x0,y0,y1);
	gui_draw_vline(x1,y0,y1);
}

/**
* @brief ������
* @param x0:���Ͻ�x����
* @param y0:���Ͻ�y����
* @param x1:���Ͻ�x����
* @param y2:���Ͻ�y����
* @param show:0:����ʾ,1:��ʾ
*/

void gui_fill_rect(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1,uint8_t show)
{
	uint16_t i = 0;
	uint16_t j = 0;
	
	for (i = x0;i <= x1;i++)
	{
		for (j = y0;j <= y1;j++)
		{
			gui_interface_draw_pixel(i,j,show);
		}	
	}	
}
/**
* @brief ��ָ��λ����ʾͼƬ
* @param x:x����
* @param y:y����
* @param bmp:ͼƬ
*/

void gui_draw_bitmap(uint16_t x,uint16_t y,const uint8_t *bmp)
{
	struct _Bmp_File_Header bmp_file_header;
	struct _Bmp_Info_Header bmp_info_header;
	uint8_t *buf_pt = 0;
	uint16_t i = 0;
	uint16_t j = 0;
	uint8_t bit = 0;
	uint8_t index_bit = 0;
	uint16_t row = 0;
	uint16_t column = 0;
	uint16_t num_bit_invalid = 0;
	
	//��ȡ�ļ�ͷ
	memcpy(&bmp_file_header,bmp,sizeof(struct _Bmp_File_Header));
	//��ȡ��Ϣͷ
	memcpy(&bmp_info_header,bmp + sizeof(struct _Bmp_File_Header),sizeof(struct _Bmp_Info_Header));
	//ͼƬ����
	buf_pt = (uint8_t *)bmp + bmp_file_header.offbits;
	//4�ֽڶ��뵼�µ���Чλ��
	num_bit_invalid = 32 - (bmp_info_header.width % 32);
	
	//��ʾͼƬ
	for (i = 0;i < bmp_info_header.width * bmp_info_header.height;i++)
	{
		bit = (*buf_pt >> (7 - index_bit)) & 0x1;
		LCD_Draw_Point1(x + column,y + bmp_info_header.height -1 - row,bit);
		
		index_bit++;
		if (index_bit >= 8)
		{
			index_bit = 0;
			buf_pt++;
		}
		
		column++;
		if (column >= bmp_info_header.width)
		{
			column = 0;
			row++;
			
			//����
			for (j = 0;j < num_bit_invalid;j++)
			{
				index_bit++;
				if (index_bit >= 8)
				{
					index_bit = 0;
					buf_pt++;
				}
			}
		}
	}
}

