/**
* Copyright (c), 2015-2025
* @file FHz40B.c
* @brief 40�ź����ֿ�,����΢���źڴ���
* @author
* @date
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "font.h"

/*********************************************************************
*							��̬����
**********************************************************************/

unsigned char Hz40B_0020[ 80] = { /* code 0020, SPACE */
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________};

unsigned char Hz40B_002E[ 80] = { /* code 002E, FULL STOP */
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  __XXXX__,________,
  _XXXXXX_,________,
  _XXXXXX_,________,
  _XXXXXX_,________,
  __XXXX__,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________,
  ________,________};

unsigned char Hz40B_0030[120] = { /* code 0030, DIGIT ZERO */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  _______X,XXXXX___,________,
  _____XXX,XXXXXXX_,________,
  ____XXXX,XXXXXXXX,________,
  ___XXXXX,XXXXXXXX,________,
  __XXXXXX,___XXXXX,X_______,
  __XXXXX_,____XXXX,X_______,
  __XXXXX_,____XXXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXX__,_____XXX,XX______,
  _XXXXXX_,____XXXX,X_______,
  __XXXXX_,____XXXX,X_______,
  __XXXXXX,___XXXXX,X_______,
  ___XXXXX,XXXXXXXX,________,
  ___XXXXX,XXXXXXX_,________,
  ____XXXX,XXXXXX__,________,
  ______XX,XXXX____,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0031[120] = { /* code 0031, DIGIT ONE */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,_XXXX___,________,
  _______X,XXXXX___,________,
  _____XXX,XXXXX___,________,
  ___XXXXX,XXXXX___,________,
  ___XXXXX,XXXXX___,________,
  ___XXXX_,XXXXX___,________,
  ___XX___,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,XXXXX___,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0032[120] = { /* code 0032, DIGIT TWO */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ______XX,XXXXX___,________,
  ____XXXX,XXXXXXX_,________,
  ___XXXXX,XXXXXXXX,________,
  ___XXXXX,XXXXXXXX,________,
  ___XXX__,___XXXXX,X_______,
  ___X____,____XXXX,X_______,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ________,___XXXXX,________,
  ________,__XXXXXX,________,
  ________,_XXXXXX_,________,
  ________,XXXXXX__,________,
  _______X,XXXXX___,________,
  _____XXX,XXXX____,________,
  ____XXXX,XXX_____,________,
  ____XXXX,X_______,________,
  ___XXXXX,________,________,
  __XXXXXX,________,________,
  __XXXXXX,XXXXXXXX,X_______,
  __XXXXXX,XXXXXXXX,X_______,
  __XXXXXX,XXXXXXXX,X_______,
  __XXXXXX,XXXXXXXX,X_______,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0033[120] = { /* code 0033, DIGIT THREE */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ______XX,XXXX____,________,
  ____XXXX,XXXXXX__,________,
  ____XXXX,XXXXXXX_,________,
  ____XXXX,XXXXXXXX,________,
  ____XX__,__XXXXXX,________,
  ____X___,___XXXXX,________,
  ________,___XXXXX,________,
  ________,___XXXXX,________,
  ________,__XXXXX_,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXX___,________,
  _____XXX,XXXXXX__,________,
  _____XXX,XXXXXXXX,________,
  ________,__XXXXXX,________,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ___X____,____XXXX,X_______,
  ___XX___,__XXXXXX,X_______,
  ___XXXXX,XXXXXXXX,________,
  ___XXXXX,XXXXXXX_,________,
  ___XXXXX,XXXXXX__,________,
  _____XXX,XXXX____,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0034[120] = { /* code 0034, DIGIT FOUR */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,___XXXX_,________,
  ________,__XXXXX_,________,
  ________,__XXXXX_,________,
  ________,_XXXXXX_,________,
  ________,XXXXXXX_,________,
  ________,XXXXXXX_,________,
  _______X,XXXXXXX_,________,
  ______XX,XX_XXXX_,________,
  _____XXX,X__XXXX_,________,
  _____XXX,X__XXXX_,________,
  ____XXXX,___XXXX_,________,
  ___XXXX_,___XXXX_,________,
  __XXXX__,___XXXX_,________,
  _XXXX___,___XXXX_,________,
  XXXXX___,___XXXX_,________,
  XXXXXXXX,XXXXXXXX,XX______,
  XXXXXXXX,XXXXXXXX,XX______,
  XXXXXXXX,XXXXXXXX,XX______,
  ________,___XXXX_,________,
  ________,___XXXX_,________,
  ________,___XXXX_,________,
  ________,___XXXX_,________,
  ________,___XXXX_,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0035[120] = { /* code 0035, DIGIT FIVE */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ____XXXX,XXXXXXXX,________,
  ____XXXX,XXXXXXXX,________,
  ____XXXX,XXXXXXXX,________,
  ____XXXX,XXXXXXXX,________,
  ____XXX_,________,________,
  ___XXXX_,________,________,
  ___XXXX_,________,________,
  ___XXXX_,________,________,
  ___XXXX_,________,________,
  ___XXXXX,XXXXX___,________,
  ___XXXXX,XXXXXXX_,________,
  ___XXXXX,XXXXXXXX,________,
  ___XXXXX,XXXXXXXX,________,
  ________,__XXXXXX,X_______,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ________,____XXXX,X_______,
  ___XX___,__XXXXXX,________,
  ___XXXXX,XXXXXXXX,________,
  ___XXXXX,XXXXXXX_,________,
  ___XXXXX,XXXXXX__,________,
  ____XXXX,XXXX____,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0036[120] = { /* code 0036, DIGIT SIX */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,_XXXXXXX,________,
  _______X,XXXXXXXX,________,
  ______XX,XXXXXXXX,________,
  _____XXX,XXXXXXXX,________,
  ____XXXX,XX_____X,________,
  ___XXXXX,X_______,________,
  ___XXXXX,________,________,
  ___XXXX_,________,________,
  __XXXXX_,_XXXXX__,________,
  __XXXXX_,XXXXXXXX,________,
  __XXXXXX,XXXXXXXX,X_______,
  __XXXXXX,XXXXXXXX,X_______,
  __XXXXXX,____XXXX,XX______,
  __XXXXX_,_____XXX,XX______,
  __XXXXX_,_____XXX,XX______,
  __XXXXX_,_____XXX,XX______,
  __XXXXX_,_____XXX,XX______,
  ___XXXXX,_____XXX,XX______,
  ___XXXXX,____XXXX,X_______,
  ____XXXX,XXXXXXXX,X_______,
  ____XXXX,XXXXXXXX,________,
  _____XXX,XXXXXXX_,________,
  _______X,XXXXX___,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0037[120] = { /* code 0037, DIGIT SEVEN */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  __XXXXXX,XXXXXXXX,XX______,
  __XXXXXX,XXXXXXXX,XX______,
  __XXXXXX,XXXXXXXX,XX______,
  __XXXXXX,XXXXXXXX,XX______,
  ________,_____XXX,X_______,
  ________,____XXXX,X_______,
  ________,___XXXXX,________,
  ________,___XXXX_,________,
  ________,__XXXXX_,________,
  ________,__XXXX__,________,
  ________,_XXXXX__,________,
  ________,_XXXX___,________,
  ________,XXXXX___,________,
  ________,XXXX____,________,
  _______X,XXXX____,________,
  _______X,XXXX____,________,
  ______XX,XXX_____,________,
  ______XX,XXX_____,________,
  ______XX,XXX_____,________,
  ______XX,XX______,________,
  _____XXX,XX______,________,
  _____XXX,XX______,________,
  _____XXX,XX______,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0038[120] = { /* code 0038, DIGIT EIGHT */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ______XX,XXXX____,________,
  ____XXXX,XXXXXX__,________,
  ___XXXXX,XXXXXXX_,________,
  ___XXXX_,___XXXX_,________,
  __XXXX__,____XXXX,________,
  __XXXX__,____XXXX,________,
  __XXXX__,____XXXX,________,
  __XXXX__,____XXXX,________,
  ___XXXX_,___XXXX_,________,
  ___XXXXX,XXXXXX__,________,
  _____XXX,XXXXX___,________,
  ____XXXX,XXXXXX__,________,
  ___XXXXX,XXXXXXX_,________,
  __XXXXX_,___XXXXX,________,
  _XXXXX__,____XXXX,X_______,
  _XXXX___,_____XXX,X_______,
  _XXXX___,_____XXX,X_______,
  _XXXX___,_____XXX,X_______,
  _XXXXX__,____XXXX,X_______,
  __XXXXX_,___XXXXX,________,
  __XXXXXX,XXXXXXXX,________,
  ____XXXX,XXXXXX__,________,
  ______XX,XXXX____,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_0039[120] = { /* code 0039, DIGIT NINE */
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ______XX,XXXX____,________,
  ____XXXX,XXXXXX__,________,
  ___XXXXX,XXXXXXX_,________,
  __XXXXXX,XXXXXXX_,________,
  __XXXXX_,___XXXXX,________,
  _XXXXX__,___XXXXX,________,
  _XXXXX__,____XXXX,X_______,
  _XXXXX__,____XXXX,X_______,
  _XXXXX__,____XXXX,X_______,
  _XXXXX__,____XXXX,X_______,
  _XXXXXX_,___XXXXX,X_______,
  __XXXXXX,XXXXXXXX,X_______,
  __XXXXXX,XXXXXXXX,X_______,
  ___XXXXX,XXX_XXXX,X_______,
  _____XXX,XX__XXXX,X_______,
  ________,____XXXX,________,
  ________,___XXXXX,________,
  ________,___XXXXX,________,
  __X_____,_XXXXXX_,________,
  __XXXXXX,XXXXXX__,________,
  __XXXXXX,XXXXXX__,________,
  __XXXXXX,XXXX____,________,
  ___XXXXX,XX______,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________,
  ________,________,________};

unsigned char Hz40B_006D[160] = { /* code 006D, LATIN SMALL LETTER M */
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  __XXXXX_,__XXXX__,___XXXXX,________,
  __XXXXX_,XXXXXXX_,__XXXXXX,XX______,
  __XXXXXX,XXXXXXXX,_XXXXXXX,XX______,
  __XXXXXX,XXXXXXXX,XXXXXXXX,XXX_____,
  __XXXXXX,___XXXXX,XX___XXX,XXX_____,
  __XXXXX_,____XXXX,XX____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  __XXXXX_,____XXXX,X_____XX,XXX_____,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________,
  ________,________,________,________};

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

uint8_t GB18030_40X40B_get_height(void)
{
	return 40;
}

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

uint8_t GB18030_40X40B_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr) 
{ 
	switch (ch)
	{
		//�ո�
		case 0x0020:
		{
			font_type->width = 9;
			font_type->height = 40;
			font_type->size = 80;
			*addr = (uint32_t)Hz40B_0020;
			break;
		}
		//.
		case 0x002E:
		{
			font_type->width = 9;
			font_type->height = 40;
			font_type->size = 80;
			*addr = (uint32_t)Hz40B_002E;
			break;
		}
		//0
		case 0x0030:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0030;
			break;
		}
		//1
		case 0x0031:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0031;
			break;
		}
		//2
		case 0x0032:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0032;
			break;
		}
		//3
		case 0x0033:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0033;
			break;
		}
		//4
		case 0x0034:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0034;
			break;
		}
		//5
		case 0x0035:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0035;
			break;
		}
		//6
		case 0x0036:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0036;
			break;
		}
		//7
		case 0x0037:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0037;
			break;
		}
		//8
		case 0x0038:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0038;
			break;
		}
		//9
		case 0x0039:
		{
			font_type->width = 19;
			font_type->height = 40;
			font_type->size = 120;
			*addr = (uint32_t)Hz40B_0039;
			break;
		}
		//m
		case 0x006D:
		{
			font_type->width = 29;
			font_type->height = 40;
			font_type->size = 160;
			*addr = (uint32_t)Hz40B_006D;
			break;
		}
		default:
		{
			return 0;
		}
	}
	
	return 1;
}

