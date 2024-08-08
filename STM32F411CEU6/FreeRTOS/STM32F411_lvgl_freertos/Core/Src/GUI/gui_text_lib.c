/**
* Copyright (c), 2015-2025
* @file gui_text_lib.c
* @brief �ı���ʾ�����ļ�
* @author
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_text_lib.h"
#include "gui_2d_lib.h"
#include "string.h"

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ��ָ��λ����ʾ�����ַ�
* @param x:x����
* @param y:y����
* @param font:����
* @param c:�ַ�
*/

void gui_disp_char_at(uint16_t x,uint16_t y,uint8_t font,uint16_t c)
{
	struct _Font_Type font_type;
	//uint8_t buf[100] = {0};
	uint8_t *buf_pt = 0;
	uint16_t i = 0;
	uint16_t j = 0;
	uint8_t k = 0;
	uint8_t bit = 0;
	uint8_t num_valid_bit = 0;
	uint8_t num_valid_byte = 0;
	
//	//��ȡ������Ϣ
//	font_type = font_read_type(font);
	//��ȡ�ַ���Ϣ
	font_read(font,c,&font_type,(uint32_t *)&buf_pt);
	//buf_pt = buf;
	
	//��Чλ��
	num_valid_bit = font_type.width % 8;
	//��Ч�ֽ���
	num_valid_byte = font_type.width / 8;
	for (i = 0;i < font_type.height;i++)
	{
		for (j = 0;j < num_valid_byte;j++)
		{
			for (k = 0;k < 8;k++)
			{
				bit = (*buf_pt >> (7 - k)) & 0x1;
				gui_interface_draw_pixel(x + j * 8 + k,y + i,bit);
			}
			buf_pt++;
		}
		for (k = 0;k < num_valid_bit;k++)
		{
			bit = (*buf_pt >> (7 - k)) & 0x1;
			gui_interface_draw_pixel(x + j * 8 + k,y + i,bit);
		}
		if (num_valid_bit > 0)
		{
			buf_pt++;
		}
	}
}

/**
* @brief ��ָ��λ����ʾ�ַ���
* @param x:x����
* @param y:y����
* @param font:����
* @param s:�ַ�
*/

void gui_disp_string_at(uint16_t x,uint16_t y,uint8_t font,char *s)
{
	struct _Font_Type font_type;
	uint16_t i = 0;
	uint16_t c = 0;
	uint8_t *buf_pt = 0;
	
	//��ȡ������Ϣ
	//font_type = font_read_type(font);
	
	for (i = 0;i < strlen(s);i++)
	{
		if (s[i] > 0x7f)
		{
			c = (s[i] << 8) + s[i + 1];
			i++;
		}
		else
		{
			c= s[i];
		}
		//��ʾ
		gui_disp_char_at(x,y,font,c);
		//��ȡ�ַ���Ϣ
		font_read(font,c,&font_type,(uint32_t *)&buf_pt);
		x += font_type.width;
	}
}

/**
* @brief ��ָ��λ����ʾ�ַ���,���������ʣ�ಿ��ֱ����ĩ
* @param x:x����
* @param y:y����
* @param font:����
* @param s:�ַ�
*/

void gui_disp_string_at_ceol(uint16_t x,uint16_t y,uint8_t font,char *s)
{
	uint8_t height = 0;
	
	//��ȡ�ַ���Ϣ
	height = font_get_height(font);
	//�������
	gui_fill_rect(x,y,LCD_WIDTH - 1,y + height - 1,0);
	gui_disp_string_at(x,y,font,s);
}

