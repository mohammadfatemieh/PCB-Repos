#ifndef __EXFUNS_H
#define __EXFUNS_H 					   
#include <stm32f4xx.h>
#include "ff.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK STM32F407������
//FATFS ��չ����	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2014/5/15
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

extern FATFS *fs[_VOLUMES];  
extern FIL *file;	 
extern FIL *ftemp;	 
extern UINT br,bw;
extern FILINFO fileinfo;
extern DIR dir;
extern u8 *fatbuf;//SD�����ݻ�����




//f_typetell���ص����Ͷ���
//���ݱ�FILE_TYPE_TBL���.��exfuns.c���涨��
#define T_BIN		0X00	//bin�ļ�
#define T_LRC		0X10	//lrc�ļ�
#define T_NES		0X20	//nes�ļ�

#define T_TEXT		0X30	//.txt�ļ�
#define T_C			0X31	//.c�ļ�
#define T_H			0X32    //.h�ļ�

#define T_WAV		0X40	//WAV�ļ�
#define T_MP3		0X41	//MP3�ļ� 
#define T_APE		0X42	//APE�ļ�
#define T_FLAC		0X43	//FLAC�ļ�

#define T_BMP		0X50	//bmp�ļ�
#define T_JPG		0X51	//jpg�ļ�
#define T_JPEG		0X52	//jpeg�ļ�		 
#define T_GIF		0X53	//gif�ļ�   

#define T_AVI		0X60	//avi�ļ�  

 
u8 exfuns_init(void);							//�����ڴ�
u8 f_typetell(u8 *fname);						//ʶ���ļ�����
u8 exf_getfree(u8 *drv,u32 *total,u32 *free);	//�õ�������������ʣ������
u32 exf_fdsize(u8 *fdname);						//�õ��ļ��д�С			 																		   

#endif

