/*
************************************************************************************************************************
*                                             information in register table
*
*                                  Copyright(C), 2006-2010, AllWinner Technology Co., Ltd.
*											       All Rights Reserved
*
* File Name   : dsk_reg.h
*
* Author      : Gary.Wang
*
* Version     : 1.0
*
* Date        : 2010.09.01
*
* Description :
* 
* Others      : None at present.
*
*
* History     :
*
*  <Author>        <time>       <version>      <description>
*
* Gary.Wang      2010.09.01        1.0         build the file
*
************************************************************************************************************************
*/
#ifndef  __DSK_REG_H__
#define  __DSK_REG_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "reg\\reg_audio_output.h"
#include "reg\\reg_display.h"
#include "reg\\reg_lcd_bright.h"

typedef enum
{
	REG_APP_SYSTEM=0,		
	REG_APP_INIT,		
	REG_APP_ROOT,		
	REG_APP_MOVIE,		
	REG_APP_MUSIC,		
	REG_APP_PHOTO,	
	REG_APP_EBOOK,
	REG_APP_FM,
	REG_APP_RECORD,
	REG_APP_CALENDAR,
	REG_APP_MAX
}reg_app_e;

typedef struct
{		
	__u32 	audio_output;		
	__u32 	channel;	
	__u32 	charset;		
	__u32 	detect_gate;	
	__u32 	volume;	
    __u32 	language;	    //����
	__u32 	style;			//������
	__u32 	backlight;		//��������
	__u32 	backlightoff;	//
	__u32 	poweroff;
	__u32	keytone;		//������
	__u32	echo_delay;	
	__u32 	gamma_r_value;
	__u32 	gamma_g_value;
	__u32 	gamma_b_value;
	__u32	output;
    __u32   pal_ntsc;//0����ntsc, 1����pal
	__u32	time_set;  //ϵͳ�������Ƿ�Ҫ����ʱ��
	__date_t	date;
	__time_t	time;

#if 1
	__s32	constract;
	__s32	brightness;
	__s32	saturation;
	__s32 	hue;
	__u32 	vcom;
#endif	
//	__u32		tp_adjust_finish_flag;
    __u32   reserverd[4];  //������������
}reg_system_para_t;

typedef struct
{
	__u32 	default_bgd_index;		
	char 	default_bgd_path[768];	
	char	setting_bgd_path[768];		
	__u32 	bgd_flag;//��ǰ�ı���״̬: 0�������ñ�����1����Ĭ�ϱ���
    __u32 	bgd_flag_in_main;//���������������ap֮ǰ������״̬:0�������ñ�����1����Ĭ�ϱ���	
    __u32   reserverd[4]; //������������
}reg_init_para_t;

typedef struct
{
	char	last_app_name[128];		// 1���һ�����е�Ӧ������
	
	__u32	last_movie_index_sd	;//	  2���һ����SD�����ŵ���Ƶ���
	char	last_movie_path_sd[768];//  3���һ����SD�����ŵ���Ƶ·��
	__u32	last_movie_start_index_sd	;//	 ��������е���ʼ������
	
	__u32	last_movie_index_ud;	//  4���һ����U�̲��ŵ���Ƶ���
	char	last_movie_path_ud[768];//  5���һ����U�̲��ŵ���Ƶ·��
	__u32	last_movie_start_index_ud	;//	��������е���ʼ������
	
	__u32	last_music_index_sd	;//  6���һ����SD�����ŵ����ֱ��
	char	last_music_path_sd[768];	//  7���һ����SD�����ŵ����־�
	__u32	last_music_start_index_sd	;//	��������е���ʼ������
	
	__u32	last_music_index_ud;//  8���һ����U�̲��ŵ����ֱ��
	char	last_music_path_ud[768];	//  9���һ����U�̲��ŵ�����·��
	__u32	last_music_start_index_ud	;//	��������е���ʼ������
	
	__u32	last_photo_index_sd;//  10���һ����SD�����ŵ�ͼƬ���
	char	last_photo_path_sd[768];//  11���һ����SD�����ŵ�ͼƬ·��
	__u32	last_photo_start_index_sd;//
	
	__u32	last_photo_index_ud;//  12���һ����U�̲��ŵ�ͼƬ���
	char	last_photo_path_ud[768];	//  13���һ����U�̲��ŵ�ͼƬ·��
	__u32	last_photo_start_index_ud;//
	
	__u32	last_ebook_index_sd;//  14���һ����SD�����ŵĵ�������
	char	last_ebook_path_sd[768];//  15���һ����SD�����ŵĵ�����·��
	__u32	last_ebook_start_index_sd;
	
	__u32	last_ebook_index_ud;//  16���һ����U�̲��ŵĵ�������
	char	last_ebook_path_ud[768];//  17���һ����U�̲��ŵĵ�����·��
	__u32	last_ebook_start_index_ud;//


	__u32	last_app_root_type;

	__u32   reserverd[4]; //������������

	__u8	level_1[18];
	__u8	level_2[18];
	
	__u8 	age_1;
	__u8    age_2;
	__u16    weight_1;
	__u16	 weight_2;
	__u8	time_1;
	__u8    time_2;
	__u8	max_level_1;
	__u8	max_level_2;
	__u8	incline_1[18];
	__u8	incline_2[18];

	__u8    BT_level[18];

	__u8	username_1[7];
	__u8	username_2[7];

	__bool	user1In_flag;

	__bool  user2In_flag;

	__bool UnitFlag; //��λ��־
	__bool BufferFlag; //��������־
	__u8   maxINC;
	__u8   maxADC;
	__u8   minADC;
	__u32  totalTime;
	__u32  totalDistance;
	__u16	weightShare_m;
	__u16   weightShare_b;
	__u8 	ageShare;

	__bool displayFlag;
	__bool pauFlag;
	__bool keyTFlag;
	__bool childFlag;

		
}reg_root_para_t;

/**************************************************************
*ģ�� movie				
*����	��������	����	��Χ	��ע
*ѭ��ģʽ	rotate_mode	__u32	0-4	
*����ģʽ	zoom_mode	__u32	0-4	
*��Ļ״̬	sub_state	__u32	0-1	
*��Ļ��ɫ	sub_color	__u32	0xffffff	rgbֵ
*��Ļλ��	sub_pos	__u32	0-2	
****************************************************************/

typedef struct
{
	__u32	rotate_mode	;	
	__u32	zoom_mode	;
	__u32	sub_state	;	
	__u32 	sub_color;	
	__u32	sub_pos;	//0:bottom 1:mid 2:top
	__u32   sub_stream;
    __u32   reserverd[4]; //������������
}reg_movie_para_t;

/**************************************************************
*ģ�� photo
*�������ֿ���	bgmusic	__s32	0-1	Ԥ��Ϊ0
*�����ٶ�	speedflag	__s32	0-4	Ԥ��Ϊ1
*�Զ��岥���ٶ�(ʱ����)	interval_time	__s32	0xffffff	Ԥ��Ϊ5
*��ʾ����	ratio	__s32	0-4	Ԥ��Ϊ0
*������Ч	effect	__s32	0-16	Ԥ��Ϊ0
*����ͼƬΪ����	bg_file_name	char[]	768�ֽ�	Ԥ��Ϊ0
*
****************************************************************/

typedef struct
{
	__u32	bgmusic	;	
	__u32	speedflag	;
	__u32	interval_time	;	
	__u32 	ratio;	
	__u32	effect;	
	__u32   reserverd[4]; //������������
}reg_photo_para_t;

typedef struct	
{
	__u32 start_item_id;	//��һ�����������ʼ��Ŀ��
	__u32 focus_item_id;	 //��һ��������н�����Ŀ��
	__u32 play_mode; 	//��һ�����õĲ���ģʽ
	__u32 EQ_mode;	//��һ�����õ�EQģʽ
	__u32 reserverd[4]; //������������
}reg_music_para_t;

typedef struct
{
	__u32	mode;			//FM,AM ģʽ
	__u32	channel_id;	 	//��һ��������Ƶ����
	__u32	FM_channel[50];	//FMƵ�α���
	//__u32	AM_channel[50];	//AMƵ�α���
	__u16	curFM1_3AM1_2_id;
	__u16	 curFM1_3AM1_2_index;
	__u32	FM1_3_AM1_2_freq[5][6];	//Ƶ�α���//add by Kingvan
	__u32	reserverd[4];	//������������ reserverd[0]:��̨����
	__u32     FM1_3_BAND_Index[3];
	__u32 	manual_seach_freq;//�ֶ��������ĵ�̨Ƶ�α���ֵ//by	 cky 
}reg_fm_para_t;

typedef struct
{
	__u32	text_colour;
	__u32	switch_time;
	__u32   bg_music_switch;	//�������ֿ���
    __u32	switch_time_flag;//���û��Զ���ʱ�仹�ǳ���Ԥ����ʱ��(0-3)	
	__u32   reserverd[4]; //������������
	
}reg_ebook_para_t;

typedef struct
{
	__u32   reserverd[8]; //������������
	
}reg_record_para_t;

/*
typedef struct
{
	__u32   test[2];
	__u32   sport_value;
}reg_sport_para_t;

*/
typedef struct
{
	__u32   reserverd[8]; //������������
	__u32   time_format;//ʱ�ƣ�0����24Сʱ�ƣ�1����12Сʱ��
}reg_calendar_para_t;




extern __s32 dsk_reg_init_para(void);

extern __s32 dsk_reg_deinit_para(void);

extern __s32 dsk_reg_flush(void);

extern void* dsk_reg_get_para_by_app(reg_app_e eApp);

extern void* dsk_reg_get_default_para_by_app(reg_app_e eApp);

extern __bool dsk_reg_get_app_restore_flag(reg_app_e eApp);

extern __s32 dsk_reg_set_app_restore_flag(reg_app_e eApp, __bool flag);

extern __s32 dsk_reg_save_cur_play_info(reg_app_e eApp, __s32 index, char* filename, rat_root_t root_type);

extern __s32 dsk_reg_set_app_restore_all(void);


#ifdef __cplusplus
}
#endif

#endif     //  ifndef __DSK_REG_H__

/* end of dsk_reg.h */