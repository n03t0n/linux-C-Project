/**
* Copyright (c), 2015-2025
* @file gui_2d_lib.c
* @brief 2dͼ�ο����ļ�
* @author
* @date 
*/

#ifndef _GUI_2D_LIB_H_
#define _GUI_2D_LIB_H_

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ����ˮƽ����
* @param y:yλ��
* @param x0:x��ʼλ��
* @param x1:x����λ��
*/

void gui_draw_hline(uint16_t y,uint16_t x0,uint16_t x1);

/**
* @brief ���ƴ�ֱ����
* @param x:xλ��
* @param y0:y��ʼλ��
* @param y1:y����λ��
*/

void gui_draw_vline(uint16_t x,uint16_t y0,uint16_t y1);

/**
* @brief ��������
* @param x0:x��ʼλ��
* @param y0:y��ʼλ��
* @param x1:x����λ��
* @param y2:y����λ��
*/

void gui_draw_line(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1);

/**
* @brief ���ƾ���
* @param x0:���Ͻ�x����
* @param y0:���Ͻ�y����
* @param x1:���Ͻ�x����
* @param y2:���Ͻ�y����
*/

void gui_draw_rect(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1);

/**
* @brief ������
* @param x0:���Ͻ�x����
* @param y0:���Ͻ�y����
* @param x1:���Ͻ�x����
* @param y2:���Ͻ�y����
* @param show:0:����ʾ,1:��ʾ
*/

void gui_fill_rect(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1,uint8_t show);

/**
* @brief ��ָ��λ����ʾͼƬ
* @param x:x����
* @param y:y����
* @param bmp:ͼƬ
*/

void gui_draw_bitmap(uint16_t x,uint16_t y,const uint8_t *bmp);

#endif


