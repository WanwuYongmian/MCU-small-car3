/*
 *   �ļ�����: LED����
 *   �ļ�����: ͨ���ñ�־λ��LED�Ƶ������߹ر�
 *
 *   ��ǰ�汾: 1.0
 *   ����    : ������
 *   �������: 2016.1.17
 *
 *   ȡ���汾: ��
 *   ԭ����  : ��
 *   �������: ��
 */
 
#include "led.h"

#define   LED_dir    DDRA_DDRA0

char  led_flag;


void led_initial (void)
{
   LED_dir = 1;
   LED = LED_OFF;
}
//=========================================================================
//������  : led_on()
//��������: �жϵ���LED�ı�־λled_flag,�����־λΪ1������LED,�����־λ
//          �����־λ led_flag == 0,�ر�LED
//�������: ��־λon_flag
//�������: ��
//����ֵ  : ��
//==========================================================================

void led_control (void) 
{
   if (led_flag == 1) 
   {
       LED = LED_ON;
   } 
   else 
   {
       LED = LED_OFF;
   }
}

