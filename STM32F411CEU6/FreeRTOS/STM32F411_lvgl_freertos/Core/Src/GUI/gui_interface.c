/**
* Copyright (c), 2015-2025
* @file gui_interface.c
* @brief gui�ӿ����ļ�
* @author
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ����
* @param x:x����
* @param y:y����
* @param show:0:����ʾ,1:��ʾ
*/

void gui_interface_draw_pixel(uint16_t x,uint16_t y,uint8_t show)
{
	if (x >= LCD_WIDTH || y >= LCD_HEIGHT)
	{
		return;
	}
	
	LCD_Draw_Point1(x,y,show);
}

