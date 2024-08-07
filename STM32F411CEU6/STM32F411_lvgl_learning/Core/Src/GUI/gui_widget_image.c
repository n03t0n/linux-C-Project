/**
* Copyright (c), 2015-2025
* @file gui_widget_image.c
* @brief ͼƬ�ؼ����ļ�
* @author
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_widget_image.h"
#include "gui_2d_lib.h"
#include "stdlib.h"
#include "string.h"

/*********************************************************************
*							��̬����
**********************************************************************/

/**
* @brief �ؼ���ʾ
* @param handle:�ؼ����
*/

static void show(Widget_Image_Handle handle);

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief �����ؼ�text
* @param x:���Ͻ�x����
* @param y:���Ͻ�y����
* @param xsize:ˮƽ�ߴ�
* @param ysize:��ֱ�ߴ�
*/

Widget_Image_Handle gui_widget_image_create(uint16_t x,uint16_t y,uint16_t xsize,uint16_t ysize)
{
	Widget_Image_Handle handle;
	
	//�ؼ���ʼ��
	handle = malloc(sizeof(*handle));
	handle->x = x;
	handle->y = y;
	handle->xsize = xsize;
	handle->ysize = ysize;
	
	return handle;
}

/**
* @brief ����ͼƬ
* @param addr:ͼƬ��ַ
*/

void gui_widget_image_set_bmp(Widget_Image_Handle handle,const uint8_t *addr)
{
	handle->addr = addr;
	
	//��ʾ
	show(handle);
}

/**
* @brief �ؼ���ʾ
* @param handle:�ؼ����
*/

static void show(Widget_Image_Handle handle)
{
	//�������
	gui_fill_rect(handle->x,handle->y,handle->x + handle->xsize,handle->y + handle->ysize,0);
	//��ʾ
	gui_draw_bitmap(handle->x,handle->y,handle->addr);
}
