/******************** (C) COPYRIGHT 2008 STMicroelectronics ********************
* File Name          : MC_Globals.c
* Author             : IMS Systems Lab
* Date First Issued  : 21/11/07
* Description        : This file contains the declarations of the global 
*                      variables utilized by the motor control library
********************************************************************************
* History:
* 21/11/07 v1.0
* 29/05/08 v2.0
********************************************************************************
*@brife ���ļ�����Ҫ�����Ƕ���ȫ�ֱ���
		1.FOC����ı���
		2.PID�ṹ��
		3.��Ҫȫ��ʱ�̹۲�ı���
*******************************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_conf.h"
#include "stm32f10x_MCconf.h"
#include "MC_const.h"
#include "MC_type.h"
#include "MC_Globals.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

/* Electrical, magnetic and mechanical variables*/

Curr_Components Stat_Curr_a_b;              /*Stator currents Ia,Ib*/ 

Curr_Components Stat_Curr_alfa_beta;        /*Ialpha & Ibeta, Clarke's  
                                            transformations of Ia & Ib */

Curr_Components Stat_Curr_q_d;              /*Iq & Id, Parke's transformations of 
                                            Ialpha & Ibeta, */

Volt_Components Stat_Volt_a_b;              /*Stator voltages Va, Vb*/ 

Volt_Components Stat_Volt_q_d;              /*Vq & Vd, voltages on a reference
                                            frame synchronous with the rotor flux*/

Volt_Components Stat_Volt_alfa_beta;        /*Valpha & Vbeta, RevPark transformations
                                             of Vq & Vd*/

/*Variable of convenience*/


volatile u32 wGlobal_Flags = FIRST_START | SPEED_CONTROL;

volatile SystStatus_t State;

PID_Struct_t PID_Flux_InitStructure;
volatile s16 hFlux_Reference;

PID_Struct_t PID_Torque_InitStructure;
volatile s16 hTorque_Reference;

PID_Struct_t   PID_Speed_InitStructure;
volatile s16 hSpeed_Reference;

PID_Struct_t PID_Position_InitSturcture;
volatile s32 absolute_Positon;
volatile s32 velocity;


/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************* (C) COPYRIGHT 2008 STMicroelectronics *****END OF FILE****/