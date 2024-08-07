/**
* Copyright (c), 2015-2025
* @file gui_widget_text.c
* @brief �ı��ؼ����ļ�
* @author
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_widget_text.h"
#include "gui_2d_lib.h"
#include "gui_text_lib.h"
#include "stdlib.h"
#include "string.h"

/*********************************************************************
*							��̬����
**********************************************************************/

/**
* @brief �ؼ���ʾ
* @param handle:�ؼ����
*/

//static void show(Widget_Text_Handle handle);

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

void gui_widget_text_create(uint16_t x,uint16_t y,uint8_t font,char *s)
{
	char ss[32];
	strcpy(ss,s);
	gui_disp_string_at(x,y,font,ss);
}
//Widget_Text_Handle gui_widget_text_create(uint16_t x,uint16_t y,uint16_t xsize,uint16_t ysize,uint8_t font,char *s)
//{
//	Widget_Text_Handle handle;
//	
//	//�ؼ���ʼ��
//	handle = malloc(sizeof(*handle));
//	handle->x = x;
//	handle->y = y;
//	handle->xsize = xsize;
//	handle->ysize = ysize;
//	handle->font = font;
//	strcpy(handle->s,s);
//	
//	//��ʾ
//	show(handle);
//	
//	return handle;
//}



///**
//* @brief �����ı�
//* @param s:�ı�
//*/

//void gui_widget_text_set_text(Widget_Text_Handle handle,uint8_t font,char *s)
//{
//	handle->font = font;
//	strcpy(handle->s,s);
//	
//	//��ʾ
//	show(handle);
//}

///**
//* @brief �ؼ���ʾ
//* @param handle:�ؼ����
//*/

//static void show(Widget_Text_Handle handle)
//{
//	//�������
//	gui_fill_rect(handle->x,handle->y,handle->x + handle->xsize,handle->y + handle->ysize,0);
//	//��ʾ
//	gui_disp_string_at(handle->x,handle->y,handle->font,handle->s);
//}
