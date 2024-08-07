/**
* Copyright (c), 2015-2025
* @file gui_widget_image.h
* @brief ͼƬ�ؼ�ͷ�ļ�
* @author jdh
* @date 2015/9/8
*/

#ifndef _GUI_WIDGET_IMAGE_H_
#define _GUI_WIDGET_IMAGE_H_

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"

/*********************************************************************
*							���ݽṹ
**********************************************************************/

/**
* @brief ͼƬ�ؼ����ݽṹ
*/

typedef struct _Widget_Image
{
	//x��λ��
	uint16_t x;
	//y��λ��
	uint16_t y;
	//ˮƽ�ߴ�
	uint16_t xsize;
	//��ֱ�ߴ�
	uint16_t ysize;
	//ͼƬ��ַ
	const uint8_t *addr;
}*Widget_Image_Handle;

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

Widget_Image_Handle gui_widget_image_create(uint16_t x,uint16_t y,uint16_t xsize,uint16_t ysize);

/**
* @brief ����ͼƬ
* @param addr:ͼƬ��ַ
*/

void gui_widget_image_set_bmp(Widget_Image_Handle handle,const uint8_t *addr);

#endif


