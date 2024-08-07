/**
* Copyright (c), 2015-2025
* @file font.c
* @brief �ֿ��ļ����ļ�
* @author
* @date
*/

/*********************************************************************
*							ͷ�ļ�
**********************************************************************/

#include "font.h"
#include "string.h"

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t GB18030_17X17_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t GB18030_17X17_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t GB18030_20X20_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t GB18030_20X20_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t GB18030_24X24_get_height(void);
	
/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t GB18030_24X24_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t GB18030_30X30_get_height(void);
	
/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t GB18030_30X30_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

uint8_t GB18030_37X37B_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

uint8_t GB18030_37X37B_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

uint8_t GB18030_40X40B_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

uint8_t GB18030_40X40B_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

uint8_t GB18030_48X48_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

uint8_t GB18030_48X48_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t TempusSansITC70_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t TempusSansITC70_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t TempusSansITC95_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t TempusSansITC95_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t FontInkFree50_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t FontInkFree50_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

extern uint8_t Digital7Mono47_get_height(void);

/**
* @brief �õ���ַ
* @param font:����
* @param ch:����ȡ���ַ�
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

extern uint8_t Digital7Mono47_get_address(uint16_t ch,struct _Font_Type *font_type,uint32_t *addr);
/*********************************************************************
*							��̬����
**********************************************************************/

///**
//* @brief ����ṹ
//*/

//static struct _Font_Type Font_Type[FONT_NUM + 1];

///*********************************************************************
//*							��̬����
//**********************************************************************/

///**
//* @brief ��ʼ����������
//*/

//static void init_font_type(void);

/*********************************************************************
*							����
**********************************************************************/

/**
* @brief �õ�����߶�
* @param font:����
* @retval �߶�
*/

uint8_t font_get_height(uint8_t font)
{
	switch (font)
	{
		case GB18030_17X17:
		{
			return GB18030_17X17_get_height();
		}
		case GB18030_20X20:
		{
			return GB18030_20X20_get_height();
		}
		case GB18030_24X24:
		{
			return GB18030_24X24_get_height();
		}
		case GB18030_30X30:
		{
			return GB18030_30X30_get_height();
		}
		case GB18030_37X37B:
		{
			return GB18030_37X37B_get_height();
		}
		case GB18030_40X40B:
		{
			return GB18030_40X40B_get_height();
		}
		case GB18030_48X48:
		{
			return GB18030_48X48_get_height();
		}
		case TempusSansITC70:
		{
			return TempusSansITC70_get_height();
		}
		case TempusSansITC95:
		{
			return TempusSansITC95_get_height();
		}
		case InkFree50:
		{
			return FontInkFree50_get_height();
		}
		case Digital7Mono47:
		{
			return Digital7Mono47_get_height();
		}		
		default:
		{
			return 0;
		}
	}
}

/**
* @brief ��ȡ�ֿ�
* @param font:����
* @param c:����ȡ���ַ�
* @param font_type:���ص�������Ϣ
* @param addr:���ݴ洢��ַ
* @retval ��ȡ���.0:ʧ��,1:�ɹ�
*/

uint8_t font_read(uint8_t font,uint16_t c,struct _Font_Type *font_type,uint32_t *addr)
{	
	switch (font)
	{
		case GB18030_17X17:
		{
			if (GB18030_17X17_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case GB18030_20X20:
		{
			if (GB18030_20X20_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case GB18030_24X24:
		{
			if (GB18030_24X24_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case GB18030_30X30:
		{
			if (GB18030_30X30_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case GB18030_37X37B:
		{
			if (GB18030_37X37B_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case GB18030_40X40B:
		{
			if (GB18030_40X40B_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case GB18030_48X48:
		{
			if (GB18030_48X48_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		case TempusSansITC70:
		{
			if (TempusSansITC70_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}			
		}
		case TempusSansITC95:
		{
			if (TempusSansITC95_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}			
		}	
		case InkFree50:
		{
			if (FontInkFree50_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}			
		}
		case Digital7Mono47:
		{
			if (Digital7Mono47_get_address(c,font_type,addr))
			{
				return 1;
			}
			else
			{
				return 0;
			}			
		}				
		default:
		{
			return 0;
		}
	}
}


