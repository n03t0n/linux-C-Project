/**
* Copyright (c), 2015-2025
* @file gui_interface.c
* @brief gui接口主文件
* @author
*/

/*********************************************************************
*							头文件
**********************************************************************/

#include "gui_interface.h"

/*********************************************************************
*							函数
**********************************************************************/

/**
* @brief 画点
* @param x:x坐标
* @param y:y坐标
* @param show:0:不显示,1:显示
*/

void gui_interface_draw_pixel(uint16_t x,uint16_t y,uint8_t show)
{
	if (x >= LCD_WIDTH || y >= LCD_HEIGHT)
	{
		return;
	}
	
	LCD_Draw_Point1(x,y,show);
}

