/**
* Copyright (c), 2015-2025
* @file gui_text_lib.h
* @brief �ı���ʾ��ͷ�ļ�
* @author
* @date 
*/

#ifndef _GUI_TEXT_LIB_H_
#define _GUI_TEXT_LIB_H_

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"
#include "font.h"

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

void gui_disp_char_at(uint16_t x,uint16_t y,uint8_t font,uint16_t c);

/**
* @brief ��ָ��λ����ʾ�ַ���
* @param x:x����
* @param y:y����
* @param font:����
* @param s:�ַ�
*/

void gui_disp_string_at(uint16_t x,uint16_t y,uint8_t font,char *s);

/**
* @brief ��ָ��λ����ʾ�ַ���,���������ʣ�ಿ��ֱ����ĩ
* @param x:x����
* @param y:y����
* @param font:����
* @param s:�ַ�
*/

void gui_disp_string_at_ceol(uint16_t x,uint16_t y,uint8_t font,char *s);

#endif


