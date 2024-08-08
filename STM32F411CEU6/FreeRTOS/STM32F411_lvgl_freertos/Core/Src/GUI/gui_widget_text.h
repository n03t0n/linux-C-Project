/**
* Copyright (c), 2015-2025
* @file gui_widget_text.h
* @brief �ı��ؼ�ͷ�ļ�
* @author
* @date 2015/9/8
*/

#ifndef _GUI_WIDGET_TEXT_H_
#define _GUI_WIDGET_TEXT_H_

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"

/*********************************************************************
*							�궨��
**********************************************************************/

/**
* @brief �ı�����.��λ:�ֽ�
*/

#define LEN_WIDGET_TEXT				32

/*********************************************************************
*							���ݽṹ
**********************************************************************/

/**
* @brief �ı������ݽṹ
*/

typedef struct _Widget_Text
{
	//x��λ��
	uint16_t x;
	//y��λ��
	uint16_t y;
	//ˮƽ�ߴ�
	uint16_t xsize;
	//��ֱ�ߴ�
	uint16_t ysize;
	//����
	uint8_t font;
	//�ı�
	char s[LEN_WIDGET_TEXT];
}*Widget_Text_Handle;

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief �����ؼ�text
* @param x:���Ͻ�x����
* @param y:���Ͻ�y����
* @param xsize:ˮƽ�ߴ�
* @param ysize:��ֱ�ߴ�
* @param font:����
* @param s:�ı�
* @retval �ؼ����
*/

void gui_widget_text_create(uint16_t x,uint16_t y,uint8_t font,char *s);

/**
* @brief �����ı�
* @param s:�ı�
*/

void gui_widget_text_set_text(Widget_Text_Handle handle,uint8_t font,char *s);

#endif


