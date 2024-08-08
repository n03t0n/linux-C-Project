/**
* Copyright (c), 2015-2025
* @file gui.h
* @brief guiͷ�ļ�
* @author
* @version 1.0
* @date 2015/9/6
*/

#ifndef _GUI_H_
#define _GUI_H_

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "gui_interface.h"
#include "gui_text_lib.h"
#include "gui_2d_lib.h"
#include "gui_widget_text.h"
#include "gui_widget_image.h"
#include "gui_widget_progbar.h"

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief ��ʼ��gui
*/

void gui_init(void);

/**
* @brief ���ٿؼ�
* @param handle:�ؼ����
*/

void gui_widget_delete(void *handle);

#endif


