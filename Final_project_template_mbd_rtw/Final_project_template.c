/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Final_project_template.c
 *
 * Code generated for Simulink model 'Final_project_template'.
 *
 * Model version                   : 10.27
 * Simulink Coder version          : 9.8 (R2022b) 13-May-2022
 * MBDT for S32K1xx Series Version : 4.3.0 (R2016a-R2022a) 13-Sep-2022
 * C/C++ source code generated on  : Wed Apr 17 17:22:11 2024
 *
 * Target selection: mbd_s32k.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Traceability
 * Validation result: Not run
 */

#include "Final_project_template.h"
#include "rtwtypes.h"
#include "Final_project_template_private.h"
#include <string.h>
#include <math.h>
#include "zero_crossing_types.h"

/* Named constants for Chart: '<S30>/Chart' */
#define IN_Manual                      ((uint8_T)1U)
#define IN_PosCtrl                     ((uint8_T)2U)
#define IN_VelCtrl                     ((uint8_T)3U)

/* Block signals (default storage) */
B rtB;

/* Block states (default storage) */
DW rtDW;

/* Previous zero-crossings (trigger) states */
PrevZCX rtPrevZCX;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;
static void rate_monotonic_scheduler(void);
flexcan_state_t canCom0_State;
flexcan_msgbuff_t canCom0_recvBuff16;
flexcan_msgbuff_t canCom0_recvBuff17;
flexcan_msgbuff_t canCom0_recvBuff12;
flexcan_msgbuff_t canCom0_recvBuff13;
flexcan_msgbuff_t canCom0_recvBuff2;
flexcan_msgbuff_t canCom0_recvBuff3;
flexcan_msgbuff_t canCom0_recvBuff14;
flexcan_msgbuff_t canCom0_recvBuff15;
flexcan_msgbuff_t canCom0_recvBuff4;
flexcan_msgbuff_t canCom0_recvBuff5;
flexcan_msgbuff_t canCom0_recvBuff6;
flexcan_msgbuff_t canCom0_recvBuff7;
flexcan_msgbuff_t canCom0_recvBuff8;
flexcan_msgbuff_t canCom0_recvBuff9;
flexcan_msgbuff_t canCom0_recvBuff10;
flexcan_msgbuff_t canCom0_recvBuff11;

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to remember which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void Final_project_template_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(rtM, 1));
  eventFlags[2] = ((boolean_T)rtmStepTask(rtM, 2));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* To ensure a deterministic data transfer between two rates,
   * data is transferred at the priority of a fast task and the frequency
   * of the slow task.  The following flags indicate when the data transfer
   * happens.  That is, a rate interaction flag is set true when both rates
   * will run, and false otherwise.
   */

  /* tid 0 shares data with slower tid rate: 2 */
  rtM->Timing.RateInteraction.TID0_2 = (rtM->Timing.TaskCounters.TID[2] == 0);

  /* tid 1 shares data with slower tid rate: 2 */
  if (rtM->Timing.TaskCounters.TID[1] == 0) {
    rtM->Timing.RateInteraction.TID1_2 = (rtM->Timing.TaskCounters.TID[2] == 0);
  }

  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 19) {/* Sample time: [0.01s, 0.0s] */
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [0.05s, 0.0s] */
    rtM->Timing.TaskCounters.TID[2] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S7>/Switch Case Action Subsystem2'
 *    '<S8>/Switch Case Action Subsystem2'
 *    '<S9>/Switch Case Action Subsystem2'
 *    '<S10>/Switch Case Action Subsystem2'
 *    '<S11>/Switch Case Action Subsystem2'
 *    '<S12>/Switch Case Action Subsystem2'
 */
void SwitchCaseActionSubsystem2(const uint8_T rtu_sn[8], real32_T *rty_s,
  real32_T *rty_n)
{
  /* S-Function (slrealtimebytepacking): '<S13>/Byte Unpacking ' */

  /* Byte Unpacking: <S13>/Byte Unpacking  */
  (void)memcpy((uint8_T*)rty_s, (uint8_T*)&rtu_sn[0] + 0, 4);
  (void)memcpy((uint8_T*)rty_n, (uint8_T*)&rtu_sn[0] + 4, 4);
}

/*
 * Output and update for action system:
 *    '<S7>/Switch Case Action Subsystem3'
 *    '<S8>/Switch Case Action Subsystem3'
 *    '<S9>/Switch Case Action Subsystem3'
 *    '<S10>/Switch Case Action Subsystem3'
 *    '<S11>/Switch Case Action Subsystem3'
 *    '<S12>/Switch Case Action Subsystem3'
 */
void SwitchCaseActionSubsystem3(const uint8_T rtu_psius[8], real32_T *rty_psi,
  real32_T *rty_us)
{
  /* S-Function (slrealtimebytepacking): '<S14>/Byte Unpacking ' */

  /* Byte Unpacking: <S14>/Byte Unpacking  */
  (void)memcpy((uint8_T*)rty_psi, (uint8_T*)&rtu_psius[0] + 0, 4);
  (void)memcpy((uint8_T*)rty_us, (uint8_T*)&rtu_psius[0] + 4, 4);
}

/* Model step function for TID0 */
void Final_project_template_step0(void) /* Sample time: [0.0005s, 0.0s] */
{
  {                                    /* Sample time: [0.0005s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* RateTransition: '<S4>/RT' */
  if (rtM->Timing.RateInteraction.TID0_2) {
    /* RateTransition: '<S4>/RT' */
    rtB.RT_k = rtDW.RT_Buffer0;

    /* RateTransition: '<S4>/RT1' */
    memcpy(&rtB.RT1[0], &rtDW.RT1_Buffer0[0], 90U * sizeof(uint8_T));
  }

  /* End of RateTransition: '<S4>/RT' */

  /* S-Function (fcgen): '<S4>/Function-Call Generator2' incorporates:
   *  SubSystem: '<S4>/UART Iteration'
   */
  /* Outputs for Resettable SubSystem: '<S78>/Resettable Subsystem' incorporates:
   *  ResetPort: '<S79>/Reset'
   */
  if (((rtPrevZCX.ResettableSubsystem_Reset_ZCE == POS_ZCSIG) != (int32_T)
       rtB.RT_k) && (rtPrevZCX.ResettableSubsystem_Reset_ZCE !=
                     UNINITIALIZED_ZCSIG)) {
    /* InitializeConditions for Delay: '<S79>/Delay' */
    rtDW.Delay_DSTATE = 0.0;
  }

  rtPrevZCX.ResettableSubsystem_Reset_ZCE = rtB.RT_k;

  /* Sum: '<S79>/Sum' incorporates:
   *  Constant: '<S79>/Constant'
   *  Delay: '<S79>/Delay'
   */
  rtDW.Delay_DSTATE++;

  /* End of Outputs for SubSystem: '<S78>/Resettable Subsystem' */

  /* MultiPortSwitch: '<S78>/Index Vector' incorporates:
   *  Delay: '<S79>/Delay'
   */
  rtB.IndexVector = rtB.RT1[(int32_T)rtDW.Delay_DSTATE - 1];

  /* S-Function (lpuart_s32k_transmit): '<S78>/LPUART_Transmit' */
  {
    LPUART_DRV_SendData(1, &rtB.IndexVector, 1);
  }

  /* End of Outputs for S-Function (fcgen): '<S4>/Function-Call Generator2' */

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive' */
  FLEXCAN_DRV_Receive(0, 16, &canCom0_recvBuff16);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive1' */
  FLEXCAN_DRV_Receive(0, 17, &canCom0_recvBuff17);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive10' */
  FLEXCAN_DRV_Receive(0, 12, &canCom0_recvBuff12);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive11' */
  FLEXCAN_DRV_Receive(0, 13, &canCom0_recvBuff13);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive12' */
  FLEXCAN_DRV_Receive(0, 2, &canCom0_recvBuff2);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive13' */
  FLEXCAN_DRV_Receive(0, 3, &canCom0_recvBuff3);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive14' */
  FLEXCAN_DRV_Receive(0, 14, &canCom0_recvBuff14);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive15' */
  FLEXCAN_DRV_Receive(0, 15, &canCom0_recvBuff15);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive2' */
  FLEXCAN_DRV_Receive(0, 4, &canCom0_recvBuff4);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive3' */
  FLEXCAN_DRV_Receive(0, 5, &canCom0_recvBuff5);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive4' */
  FLEXCAN_DRV_Receive(0, 6, &canCom0_recvBuff6);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive5' */
  FLEXCAN_DRV_Receive(0, 7, &canCom0_recvBuff7);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive6' */
  FLEXCAN_DRV_Receive(0, 8, &canCom0_recvBuff8);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive7' */
  FLEXCAN_DRV_Receive(0, 9, &canCom0_recvBuff9);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive8' */
  FLEXCAN_DRV_Receive(0, 10, &canCom0_recvBuff10);

  /* S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive9' */
  FLEXCAN_DRV_Receive(0, 11, &canCom0_recvBuff11);

  /* S-Function (ftm_s32k_pwm_config): '<S3>/FTM_PWM_Config' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   */
  {
    uint16_t dutyA = FTM_MAX_DUTY_CYCLE * 0.5F;
    FTM_DRV_UpdatePwmChannel(FTM_PWM3, 0U, FTM_PWM_UPDATE_IN_DUTY_CYCLE, dutyA,
      0, true);
  }
}

/* Model step function for TID1 */
void Final_project_template_step1(void) /* Sample time: [0.01s, 0.0s] */
{
  /* local block i/o variables */
  real_T rtb_DataTypeConversion;
  real_T rtb_dsdt;
  real_T rtb_TSamp_tmp;
  real32_T rtb_Conversion;
  real32_T rtb_Gain_ie;
  real32_T rtb_Product_m_idx_0;
  real32_T rtb_Product_m_idx_1;
  real32_T rtb_Sum1_j;
  real32_T rtb_Sum1_k;
  uint32_T HighLevelDesign_ELAPS_T;

  /* End of Outputs for S-Function (fcan_s32k_isr): '<S1>/FCAN_Isr' */

  /* S-Function (fcgen): '<Root>/Function-Call Top' incorporates:
   *  SubSystem: '<Root>/High Level Design'
   */
  if (rtDW.HighLevelDesign_RESET_ELAPS_T) {
    HighLevelDesign_ELAPS_T = 0U;
  } else {
    HighLevelDesign_ELAPS_T = rtM->Timing.clockTick1 -
      rtDW.HighLevelDesign_PREV_T;
  }

  rtDW.HighLevelDesign_PREV_T = rtM->Timing.clockTick1;
  rtDW.HighLevelDesign_RESET_ELAPS_T = false;

  /* S-Function (gpio_s32k_input): '<S27>/Digital_Input' */

  /* GPIPORTE14 signal update */
  rtB.Digital_Input = (PINS_DRV_ReadPins(PTE) >> 14) & 0x01;

  /* SignalConversion generated from: '<S2>/s,n,psi,us (Cars 1-6)' */
  rtB.snpsiusCars16[0] = rtB.ByteUnpacking_o1_m;
  rtB.snpsiusCars16[1] = rtB.ByteUnpacking_o2_k;
  rtB.snpsiusCars16[2] = rtB.ByteUnpacking_o1_b;
  rtB.snpsiusCars16[3] = rtB.ByteUnpacking_o2_nz;
  rtB.snpsiusCars16[4] = rtB.ByteUnpacking_o1_o3;
  rtB.snpsiusCars16[5] = rtB.ByteUnpacking_o2_h;
  rtB.snpsiusCars16[6] = rtB.ByteUnpacking_o1_az;
  rtB.snpsiusCars16[7] = rtB.ByteUnpacking_o2_b;
  rtB.snpsiusCars16[8] = rtB.ByteUnpacking_o1_i;
  rtB.snpsiusCars16[9] = rtB.ByteUnpacking_o2_i;
  rtB.snpsiusCars16[10] = rtB.ByteUnpacking_o1_a;
  rtB.snpsiusCars16[11] = rtB.ByteUnpacking_o2_j1;
  rtB.snpsiusCars16[12] = rtB.ByteUnpacking_o1_o0;
  rtB.snpsiusCars16[13] = rtB.ByteUnpacking_o2_p;
  rtB.snpsiusCars16[14] = rtB.ByteUnpacking_o1_c;
  rtB.snpsiusCars16[15] = rtB.ByteUnpacking_o2_c;
  rtB.snpsiusCars16[16] = rtB.ByteUnpacking_o1_o;
  rtB.snpsiusCars16[17] = rtB.ByteUnpacking_o2_j;
  rtB.snpsiusCars16[18] = rtB.ByteUnpacking_o1_f4;
  rtB.snpsiusCars16[19] = rtB.ByteUnpacking_o2_m;
  rtB.snpsiusCars16[20] = rtB.ByteUnpacking_o1_f;
  rtB.snpsiusCars16[21] = rtB.ByteUnpacking_o2_n;
  rtB.snpsiusCars16[22] = rtB.ByteUnpacking_o1;
  rtB.snpsiusCars16[23] = rtB.ByteUnpacking_o2;

  /* SignalConversion generated from: '<S30>/S-Function Builder' incorporates:
   *  UnitDelay: '<S2>/Unit Delay'
   */
  rtB.TmpSignalConversionAtSFunctionB[0] = rtDW.UnitDelay_DSTATE[0];
  rtB.TmpSignalConversionAtSFunctionB[1] = rtDW.UnitDelay_DSTATE[1];
  rtB.TmpSignalConversionAtSFunctionB[2] = rtDW.UnitDelay_DSTATE[2];
  rtB.TmpSignalConversionAtSFunctionB[3] = rtDW.UnitDelay_DSTATE[3];
  memcpy(&rtB.TmpSignalConversionAtSFunctionB[4], &rtB.snpsiusCars16[0], 24U *
         sizeof(real32_T));

  /* S-Function (ahead_logic): '<S30>/S-Function Builder' */
  ahead_logic_Outputs_wrapper(&rtB.TmpSignalConversionAtSFunctionB[0],
    &rtB.SFunctionBuilder_o1, &rtB.SFunctionBuilder_o2);

  /* Chart: '<S30>/Chart' incorporates:
   *  UnitDelay: '<S2>/Unit Delay'
   */
  if (rtDW.is_active_c3_Final_project_temp == 0U) {
    rtDW.is_active_c3_Final_project_temp = 1U;
    rtDW.is_c3_Final_project_template = IN_Manual;
  } else {
    switch (rtDW.is_c3_Final_project_template) {
     case IN_Manual:
      rtb_Gain_ie = rtB.SFunctionBuilder_o1 - rtDW.UnitDelay_DSTATE[0];
      if (rtB.Digital_Input && (rtB.SFunctionBuilder_o2 < rtDW.UnitDelay_DSTATE
           [3]) && (rtb_Gain_ie <= 20.0F)) {
        rtDW.is_c3_Final_project_template = IN_PosCtrl;
      } else if (rtB.Digital_Input && ((rtB.SFunctionBuilder_o2 >
                   rtDW.UnitDelay_DSTATE[3]) || (rtb_Gain_ie > 20.0F) ||
                  ((rtB.SFunctionBuilder_o2 == rtDW.UnitDelay_DSTATE[3]) &&
                   (rtB.SFunctionBuilder_o1 == rtDW.UnitDelay_DSTATE[0])))) {
        rtDW.is_c3_Final_project_template = IN_VelCtrl;
      } else {
        rtB.man = true;
        rtB.vel = false;
        rtB.pos = false;
      }
      break;

     case IN_PosCtrl:
      if (!rtB.Digital_Input) {
        rtDW.is_c3_Final_project_template = IN_Manual;
      } else if (rtB.Digital_Input && ((rtB.SFunctionBuilder_o2 >
                   rtDW.UnitDelay_DSTATE[3]) || (rtB.SFunctionBuilder_o1 -
                   rtDW.UnitDelay_DSTATE[0] > 20.0F) ||
                  ((rtB.SFunctionBuilder_o2 == rtDW.UnitDelay_DSTATE[3]) &&
                   (rtB.SFunctionBuilder_o1 == rtDW.UnitDelay_DSTATE[0])))) {
        rtDW.is_c3_Final_project_template = IN_VelCtrl;
      } else {
        rtB.man = false;
        rtB.vel = false;
        rtB.pos = true;
      }
      break;

     default:
      /* case IN_VelCtrl: */
      if (!rtB.Digital_Input) {
        rtDW.is_c3_Final_project_template = IN_Manual;
      } else if (rtB.Digital_Input && (rtB.SFunctionBuilder_o2 <
                  rtDW.UnitDelay_DSTATE[3]) && (rtB.SFunctionBuilder_o1 -
                  rtDW.UnitDelay_DSTATE[0] <= 20.0F)) {
        rtDW.is_c3_Final_project_template = IN_PosCtrl;
      } else {
        rtB.man = false;
        rtB.vel = true;
        rtB.pos = false;
      }
      break;
    }
  }

  /* End of Chart: '<S30>/Chart' */

  /* S-Function (gpio_s32k_output): '<S25>/Digital_Output' */

  /* GPOPORTD8 Data Signal Update */
  if (rtB.pos) {
    PINS_DRV_SetPins(PTD, 1UL<<8);
  } else {
    PINS_DRV_ClearPins(PTD, 1UL<<8);
  }

  /* S-Function (gpio_s32k_output): '<S25>/Digital_Output1' */

  /* GPOPORTD9 Data Signal Update */
  if (rtB.vel) {
    PINS_DRV_SetPins(PTD, 1UL<<9);
  } else {
    PINS_DRV_ClearPins(PTD, 1UL<<9);
  }

  /* S-Function (gpio_s32k_output): '<S25>/Digital_Output2' */

  /* GPOPORTD10 Data Signal Update */
  if (rtB.man) {
    PINS_DRV_SetPins(PTD, 1UL<<10);
  } else {
    PINS_DRV_ClearPins(PTD, 1UL<<10);
  }

  /* S-Function (adc_s32k_start): '<S42>/ADC_Start' */
  {
    adc_chan_config_t adc0_chan_cfg = {
      .interruptEnable = false,
      .channel = ADC_INPUTCHAN_EXT0
    };

    /* Initialize channel configuration of ADC0. */
    ADC_DRV_ConfigChan(0, 0, &adc0_chan_cfg);
    uint16_t result;

    /* Get conversion result of ADC0 */
    ADC_DRV_WaitConvDone(0);
    ADC_DRV_GetChanResult(0, 0, &result);
    rtB.ADC_Start = result;
  }

  /* Outputs for Enabled SubSystem: '<S25>/Enabled Subsystem' incorporates:
   *  EnablePort: '<S31>/Enable'
   */
  if (rtB.man) {
    /* Merge: '<S25>/Merge' incorporates:
     *  Constant: '<S42>/Constant'
     *  Gain: '<S42>/Gain'
     *  SignalConversion generated from: '<S31>/Throttle'
     *  Sum: '<S42>/Sum'
     */
    rtB.Merge = ((real32_T)rtB.ADC_Start - 512.0F) * 0.75F;
  }

  /* End of Outputs for SubSystem: '<S25>/Enabled Subsystem' */

  /* Outputs for Enabled SubSystem: '<S25>/Position Ctrl' incorporates:
   *  EnablePort: '<S32>/Enable'
   */
  if (rtB.pos) {
    /* Merge: '<S25>/Merge' incorporates:
     *  Constant: '<S25>/Constant'
     *  Gain: '<S32>/D-gain'
     *  Gain: '<S32>/Feed-forward'
     *  Gain: '<S32>/P-gain'
     *  Sum: '<S32>/Sum1'
     *  Sum: '<S32>/Sum2'
     *  Sum: '<S32>/Sum3'
     *  Sum: '<S32>/Sum4'
     *  Sum: '<S32>/Sum5'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    rtB.Merge = ((20.0F - (rtB.SFunctionBuilder_o1 - rtDW.UnitDelay_DSTATE[0])) *
                 -3000.0F + (rtB.SFunctionBuilder_o2 - rtDW.UnitDelay_DSTATE[3])
                 * 4900.0F) + 100.0F * rtB.SFunctionBuilder_o2;
  }

  /* End of Outputs for SubSystem: '<S25>/Position Ctrl' */

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input' */

  /* GPIPORTE6 signal update */
  rtB.Digital_Input_g = (PINS_DRV_ReadPins(PTE) >> 6) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input1' */

  /* GPIPORTE7 signal update */
  rtB.Digital_Input1 = (PINS_DRV_ReadPins(PTE) >> 7) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input2' */

  /* GPIPORTE8 signal update */
  rtB.Digital_Input2 = (PINS_DRV_ReadPins(PTE) >> 8) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input3' */

  /* GPIPORTE9 signal update */
  rtB.Digital_Input3 = (PINS_DRV_ReadPins(PTE) >> 9) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input4' */

  /* GPIPORTE10 signal update */
  rtB.Digital_Input4 = (PINS_DRV_ReadPins(PTE) >> 10) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input5' */

  /* GPIPORTE11 signal update */
  rtB.Digital_Input5 = (PINS_DRV_ReadPins(PTE) >> 11) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input6' */

  /* GPIPORTE12 signal update */
  rtB.Digital_Input6 = (PINS_DRV_ReadPins(PTE) >> 12) & 0x01;

  /* S-Function (gpio_s32k_input): '<S41>/Digital_Input7' */

  /* GPIPORTE13 signal update */
  rtB.Digital_Input7 = (PINS_DRV_ReadPins(PTE) >> 13) & 0x01;

  /* Gain: '<S41>/Gain' incorporates:
   *  ArithShift: '<S41>/Shift Arithmetic1'
   *  ArithShift: '<S41>/Shift Arithmetic2'
   *  ArithShift: '<S41>/Shift Arithmetic3'
   *  ArithShift: '<S41>/Shift Arithmetic4'
   *  ArithShift: '<S41>/Shift Arithmetic5'
   *  ArithShift: '<S41>/Shift Arithmetic6'
   *  ArithShift: '<S41>/Shift Arithmetic7'
   *  DataTypeConversion: '<S41>/Data Type Conversion'
   *  DataTypeConversion: '<S41>/Data Type Conversion1'
   *  DataTypeConversion: '<S41>/Data Type Conversion2'
   *  DataTypeConversion: '<S41>/Data Type Conversion3'
   *  DataTypeConversion: '<S41>/Data Type Conversion4'
   *  DataTypeConversion: '<S41>/Data Type Conversion5'
   *  DataTypeConversion: '<S41>/Data Type Conversion6'
   *  DataTypeConversion: '<S41>/Data Type Conversion7'
   *  DataTypeConversion: '<S41>/Data Type Conversion8'
   *  Sum: '<S41>/Add'
   */
  rtb_Gain_ie = (real32_T)((int32_T)(((((((uint32_T)(rtB.Digital_Input1 << 1) +
    rtB.Digital_Input_g) + (uint32_T)(rtB.Digital_Input2 << 2)) + (uint32_T)
    (rtB.Digital_Input3 << 3)) + (uint32_T)(rtB.Digital_Input4 << 4)) +
    (uint32_T)(rtB.Digital_Input5 << 5)) + (uint32_T)(rtB.Digital_Input6 << 6))
    + (rtB.Digital_Input7 << 7)) * 0.25F;

  /* Outputs for Enabled SubSystem: '<S25>/Speed Ctrl' incorporates:
   *  EnablePort: '<S33>/Enable'
   */
  if (rtB.vel) {
    /* Sum: '<S33>/Sum1' incorporates:
     *  UnitDelay: '<S2>/Unit Delay'
     */
    rtb_Sum1_k = rtb_Gain_ie - rtDW.UnitDelay_DSTATE[3];

    /* Merge: '<S25>/Merge' incorporates:
     *  Gain: '<S33>/Gain'
     *  Gain: '<S35>/Gain1'
     *  Sum: '<S33>/Sum'
     *  Sum: '<S35>/Sum'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    rtB.Merge = (5000.0F * rtb_Sum1_k + rtDW.UnitDelay_DSTATE_o) + 100.0F *
      rtb_Gain_ie;

    /* Sum: '<S36>/Sum' incorporates:
     *  Gain: '<S35>/Gain'
     *  Gain: '<S36>/Gain'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    rtDW.UnitDelay_DSTATE_o += 50.0F * rtb_Sum1_k * 0.01F;
  }

  /* End of Outputs for SubSystem: '<S25>/Speed Ctrl' */

  /* S-Function (ftm_s32k_quadrature_decoder): '<S43>/Quadrature_Decoder' */

  /* FTM2: get counter value */
  rtB.Quadrature_Decoder_o2 = FTM_DRV_GetQuadDir(FTM2);
  rtB.Quadrature_Decoder_o4 = FTM_DRV_GetQuadTimerOverflowDir(FTM2);
  rtB.Quadrature_Decoder_o3 = FTM_DRV_HasTimerOverflowed(FTM2);
  rtB.Quadrature_Decoder_o1 = FTM_DRV_GetCounter(FTM2);
  FTM_DRV_ClearTimerOverflow(FTM2);

  /* Sum: '<S44>/Sum1' incorporates:
   *  DataTypeConversion: '<S44>/Data Type Conversion1'
   *  DataTypeConversion: '<S44>/Data Type Conversion2'
   *  Gain: '<S44>/Gain'
   *  Sum: '<S44>/Sum'
   *  UnitDelay: '<S44>/Unit Delay'
   *  UnitDelay: '<S44>/Unit Delay1'
   */
  rtDW.UnitDelay1_DSTATE += (real32_T)(int16_T)(rtB.Quadrature_Decoder_o1 -
    rtDW.UnitDelay_DSTATE_c) * 0.09F;

  /* Gain: '<S27>/Gain' incorporates:
   *  Gain: '<S43>/Gain'
   *  UnitDelay: '<S44>/Unit Delay1'
   */
  rtB.Gain = 0.0174532924F * rtDW.UnitDelay1_DSTATE * -0.2F;

  /* Outputs for Atomic SubSystem: '<S29>/Vehicle Dynamics' */
  /* DiscreteIntegrator: '<S65>/Discrete-Time Integrator' */
  if (rtDW.DiscreteTimeIntegrator_SYSTEM_E != 0) {
    /* DiscreteIntegrator: '<S65>/Discrete-Time Integrator' */
    rtB.DiscreteTimeIntegrator = rtDW.DiscreteTimeIntegrator_DSTATE;
  } else {
    /* DiscreteIntegrator: '<S65>/Discrete-Time Integrator' */
    rtB.DiscreteTimeIntegrator = 0.01F * (real32_T)HighLevelDesign_ELAPS_T
      * rtDW.DiscreteTimeIntegrator_PREV_U + rtDW.DiscreteTimeIntegrator_DSTATE;
  }

  /* End of DiscreteIntegrator: '<S65>/Discrete-Time Integrator' */

  /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator2' */
  if (rtDW.DiscreteTimeIntegrator2_SYSTEM_ != 0) {
    /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator2' */
    rtB.DiscreteTimeIntegrator2 = rtDW.DiscreteTimeIntegrator2_DSTATE;
  } else {
    /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator2' */
    rtB.DiscreteTimeIntegrator2 = 0.01F * (real32_T)HighLevelDesign_ELAPS_T
      * rtDW.DiscreteTimeIntegrator2_PREV_U +
      rtDW.DiscreteTimeIntegrator2_DSTATE;
  }

  /* End of DiscreteIntegrator: '<S67>/Discrete-Time Integrator2' */

  /* S-Function (model): '<S66>/S-Function Builder' */
  model_Outputs_wrapper(&rtB.DiscreteTimeIntegrator, &rtB.Gain,
                        &rtB.DiscreteTimeIntegrator2, &rtB.SFunctionBuilder_o1_b,
                        &rtB.SFunctionBuilder_o2_i, &rtB.SFunctionBuilder_o3,
                        &rtConstP.pooled6, 1, &rtConstP.pooled6, 1);

  /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator' */
  if (rtDW.DiscreteTimeIntegrator_SYSTEM_b == 0) {
    /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator' */
    rtDW.DiscreteTimeIntegrator_DSTATE_k += 0.01F * (real32_T)
      HighLevelDesign_ELAPS_T * rtDW.DiscreteTimeIntegrator_PREV_U_d;
  }

  /* End of DiscreteIntegrator: '<S67>/Discrete-Time Integrator' */

  /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator1' */
  if (rtDW.DiscreteTimeIntegrator1_SYSTEM_ == 0) {
    /* DiscreteIntegrator: '<S67>/Discrete-Time Integrator1' */
    rtDW.DiscreteTimeIntegrator1_DSTATE += 0.01F * (real32_T)
      HighLevelDesign_ELAPS_T * rtDW.DiscreteTimeIntegrator1_PREV_U;
  }

  /* End of DiscreteIntegrator: '<S67>/Discrete-Time Integrator1' */

  /* Update for DiscreteIntegrator: '<S65>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S65>/Gain'
   *  Gain: '<S65>/Gain1'
   *  Sum: '<S65>/Sum'
   */
  rtDW.DiscreteTimeIntegrator_SYSTEM_E = 0U;
  rtDW.DiscreteTimeIntegrator_DSTATE = rtB.DiscreteTimeIntegrator;
  rtDW.DiscreteTimeIntegrator_PREV_U = (rtB.Merge - 100.0F *
    rtB.DiscreteTimeIntegrator) * 0.0005F;

  /* Update for DiscreteIntegrator: '<S67>/Discrete-Time Integrator2' */
  rtDW.DiscreteTimeIntegrator2_SYSTEM_ = 0U;
  rtDW.DiscreteTimeIntegrator2_DSTATE = rtB.DiscreteTimeIntegrator2;
  rtDW.DiscreteTimeIntegrator2_PREV_U = rtB.SFunctionBuilder_o3;

  /* Update for DiscreteIntegrator: '<S67>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_SYSTEM_b = 0U;
  rtDW.DiscreteTimeIntegrator_PREV_U_d = rtB.SFunctionBuilder_o1_b;

  /* Update for DiscreteIntegrator: '<S67>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_SYSTEM_ = 0U;
  rtDW.DiscreteTimeIntegrator1_PREV_U = rtB.SFunctionBuilder_o2_i;

  /* End of Outputs for SubSystem: '<S29>/Vehicle Dynamics' */

  /* UnitDelay: '<S74>/Unit Delay' */
  rtB.UnitDelay = rtDW.UnitDelay_DSTATE_i;

  /* S-Function (get_path1): '<S71>/Look up P' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.UnitDelay), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP_o1 = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP_o2 = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP_o1 = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP_o2 = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* Sum: '<S71>/Sum' */
  rtb_Product_m_idx_0 = rtDW.DiscreteTimeIntegrator_DSTATE_k - rtB.LookupP_o1;
  rtb_Product_m_idx_1 = rtDW.DiscreteTimeIntegrator1_DSTATE - rtB.LookupP_o2;

  /* S-Function (get_rvec1): '<S71>/Look up Right Vector' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.UnitDelay), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector_o1 = fy;
        rtB.LookupRightVector_o2 = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector_o1 = cos(r);
        rtB.LookupRightVector_o2 = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* Sum: '<S76>/Sum1' incorporates:
   *  Product: '<S76>/Product'
   */
  rtB.Sum1 = rtb_Product_m_idx_0 * rtB.LookupRightVector_o1 +
    rtb_Product_m_idx_1 * rtB.LookupRightVector_o2;

  /* SampleTimeMath: '<S40>/TSamp' incorporates:
   *  Gain: '<S38>/Gain1'
   *  SampleTimeMath: '<S39>/TSamp'
   *  Sum: '<S26>/Sum'
   *
   * About '<S40>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   *
   * About '<S39>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp_tmp = (real32_T)((real_T)HighLevelDesign_ELAPS_T * 0.01);
  rtb_Gain_ie = (real32_T)(0.0331F * rtB.Sum1 / rtb_TSamp_tmp);

  /* Sum: '<S26>/Sum1' incorporates:
   *  Gain: '<S38>/Gain'
   *  Sum: '<S26>/Sum'
   *  Sum: '<S38>/Sum'
   *  Sum: '<S40>/Diff'
   *  UnitDelay: '<S40>/UD'
   *
   * Block description for '<S40>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S40>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Sum1_j = (0.2367F * rtB.Sum1 + (rtb_Gain_ie - rtDW.UD_DSTATE)) - rtB.Gain;

  /* SampleTimeMath: '<S39>/TSamp' incorporates:
   *  Gain: '<S37>/Gain1'
   *
   * About '<S39>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_Sum1_k = (real32_T)(137.43F * rtb_Sum1_j / rtb_TSamp_tmp);

  /* S-Function (gpio_s32k_input): '<S27>/Digital_Input1' */

  /* GPIPORTE15 signal update */
  rtB.Digital_Input1_b = (PINS_DRV_ReadPins(PTE) >> 15) & 0x01;

  /* Product: '<S26>/Product' incorporates:
   *  Gain: '<S37>/Gain'
   *  Sum: '<S37>/Sum'
   *  Sum: '<S39>/Diff'
   *  UnitDelay: '<S39>/UD'
   *
   * Block description for '<S39>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S39>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Conversion = (473.451508F * rtb_Sum1_j + (rtb_Sum1_k - rtDW.UD_DSTATE_f)) *
    (real32_T)rtB.Digital_Input1_b;

  /* S-Function (get_rvec1): '<S49>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.UnitDelay), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1 = fy;
        rtB.LookupRightVector1_o2 = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1 = cos(r);
        rtB.LookupRightVector1_o2 = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S49>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.UnitDelay), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1 = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2 = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1 = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2 = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S56>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[0]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1_j = fy;
        rtB.LookupRightVector1_o2_m = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1_j = cos(r);
        rtB.LookupRightVector1_o2_m = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S56>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[0]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1_j = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2_m = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1_j = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2_m = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S57>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[4]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1_i = fy;
        rtB.LookupRightVector1_o2_d = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1_i = cos(r);
        rtB.LookupRightVector1_o2_d = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S57>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[4]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1_f = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2_p = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1_f = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2_p = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S58>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[8]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1_a = fy;
        rtB.LookupRightVector1_o2_j = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1_a = cos(r);
        rtB.LookupRightVector1_o2_j = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S58>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[8]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1_jz = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2_pi = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1_jz = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2_pi = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S59>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[12]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1_c = fy;
        rtB.LookupRightVector1_o2_e = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1_c = cos(r);
        rtB.LookupRightVector1_o2_e = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S59>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[12]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1_a = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2_l = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1_a = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2_l = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S60>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[16]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1_iv = fy;
        rtB.LookupRightVector1_o2_f = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1_iv = cos(r);
        rtB.LookupRightVector1_o2_f = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S60>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[16]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1_c = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2_e = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1_c = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2_e = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S61>/Look up Right Vector1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[20]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector1_o1_je = fy;
        rtB.LookupRightVector1_o2_b = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector1_o1_je = cos(r);
        rtB.LookupRightVector1_o2_b = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_path1): '<S61>/Look up P1' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.snpsiusCars16[20]), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* If the path is straight, interpolate between start and stop */
      rtB.LookupP1_o1_g = rs[i].data.straight.start[0] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[0]-rs[i].
        data.straight.start[0]);
      rtB.LookupP1_o2_n = rs[i].data.straight.start[1] +
        (p/rs[i].data.straight.length)*(rs[i].data.straight.stop[1]-rs[i].
        data.straight.start[1]);
      break;

     case CONST_CURVE:
      rtB.LookupP1_o1_g = rs[i].data.const_curve.center[0] + rs[i].
        data.const_curve.r
        *cos( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      rtB.LookupP1_o2_n = rs[i].data.const_curve.center[1] + rs[i].
        data.const_curve.r
        *sin( (double)(rs[i].data.const_curve.dir)*p/(rs[i].data.const_curve.r)
             + rs[i].data.const_curve.ts );
      break;

     default :
      /* assign no value */
      break;
    }
  }

  /* S-Function (get_rvec1): '<S70>/Look up Right Vector' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.UnitDelay), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector_o1_j = fy;
        rtB.LookupRightVector_o2_f = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector_o1_j = cos(r);
        rtB.LookupRightVector_o2_f = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* Sum: '<S69>/Sum1' */
  rtb_Sum1_j = rtB.DiscreteTimeIntegrator2 + rtB.Gain;

  /* Product: '<S69>/Product1' incorporates:
   *  Gain: '<S70>/Gain'
   *  Product: '<S69>/Product'
   *  Product: '<S69>/Product2'
   *  Sum: '<S69>/Sum'
   *  Trigonometry: '<S69>/Trigonometric Function'
   *  Trigonometry: '<S69>/Trigonometric Function1'
   */
  rtB.Product1 = (-rtB.LookupRightVector_o2_f * cosf(rtb_Sum1_j) + sinf
                  (rtb_Sum1_j) * rtB.LookupRightVector_o1_j) *
    rtB.DiscreteTimeIntegrator;

  /* S-Function (any2byte): '<S47>/Byte Pack1' */

  /* Pack: <S47>/Byte Pack1 */
  (void) memcpy(&rtB.BytePack1[0], &rtB.DiscreteTimeIntegrator2,
                4);
  (void) memcpy(&rtB.BytePack1[4], &rtB.Product1,
                4);

  /* S-Function (fcan_s32k_send): '<S47>/psi,us' incorporates:
   *  Constant: '<S47>/Constant'
   */
  {
    flexcan_data_info_t canCom0_txBuff1 = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = ((uint8_T)8U),
      .fd_enable = false,
      .fd_padding = 0x0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigTxMb(0, 1, &canCom0_txBuff1, 0x56);
    FLEXCAN_DRV_Send(0, 1, &canCom0_txBuff1, 0x56, &rtB.BytePack1[0]);
  }

  /* S-Function (any2byte): '<S47>/Byte Pack' */

  /* Pack: <S47>/Byte Pack */
  (void) memcpy(&rtB.BytePack[0], &rtB.UnitDelay,
                4);
  (void) memcpy(&rtB.BytePack[4], &rtB.Sum1,
                4);

  /* S-Function (fcan_s32k_send): '<S47>/s,n' incorporates:
   *  Constant: '<S47>/Constant1'
   */
  {
    flexcan_data_info_t canCom0_txBuff0 = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = ((uint8_T)8U),
      .fd_enable = false,
      .fd_padding = 0x0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigTxMb(0, 0, &canCom0_txBuff0, 0x55);
    FLEXCAN_DRV_Send(0, 0, &canCom0_txBuff0, 0x55, &rtB.BytePack[0]);
  }

  /* Sum: '<S62>/Sum' incorporates:
   *  Constant: '<S62>/Constant'
   *  Constant: '<S64>/Constant'
   *  Gain: '<S62>/Gain'
   *  Product: '<S64>/Product'
   *  Sum: '<S28>/Sum1'
   */
  rtB.Saturation = ((0.0F - rtB.DiscreteTimeIntegrator * rtB.Gain * -100.0F) -
                    rtb_Conversion) * 0.0003162F + 0.5F;

  /* Saturate: '<S62>/Saturation' */
  if (rtB.Saturation > 0.76F) {
    /* Sum: '<S62>/Sum' incorporates:
     *  Saturate: '<S62>/Saturation'
     */
    rtB.Saturation = 0.76F;
  } else if (rtB.Saturation < 0.24F) {
    /* Sum: '<S62>/Sum' incorporates:
     *  Saturate: '<S62>/Saturation'
     */
    rtB.Saturation = 0.24F;
  }

  /* End of Saturate: '<S62>/Saturation' */

  /* S-Function (ftm_s32k_pwm_config): '<S48>/FTM_PWM_Config' incorporates:
   *  Constant: '<S48>/Constant'
   */
  {
    uint16_t dutyA = FTM_MAX_DUTY_CYCLE * rtB.Saturation;
    FTM_DRV_UpdatePwmChannel(FTM_PWM0, 0U, FTM_PWM_UPDATE_IN_DUTY_CYCLE, dutyA,
      0, true);
  }

  /* S-Function (get_rvec1): '<S73>/Look up Right Vector' */
  {
    extern struct road_seg_type rs[MAX_RS];
    real_T p, u_alt;
    int i;

    /* keep u within the range [0, PATH_LENGTH) */
    u_alt = fmod( (rtB.UnitDelay), PATH_LENGTH);

    /* Find the segment in rs[] that the path distance u_alt lies within */
    for (i=0; i<MAX_RS; i++) {
      if (rs[i].p > u_alt) {
        i--;
        break;
      }
    }

    /* i is the segment in which u lies; p is the path length from the
     * beginning of segment i to u_alt */
    p = u_alt - rs[i].p;
    switch ( rs[i].type)
    {
     case STRAIGHT:
      /* if path is straight, then the "right" vector is normal to
       * the vector that points straight ahead */
      {
        double fx, fy;                 /* unit vector straight ahead */
        double length;                 /* length of vector from start to stop */
        fx = rs[i].data.straight.stop[0] - rs[i].data.straight.start[0];
        fy = rs[i].data.straight.stop[1] - rs[i].data.straight.start[1];
        length = sqrt(fx*fx + fy*fy);
        fx /= length;
        fy /= length;

        /* <x,y,0> =  <fx,fy,0> x <0,0,1> */
        rtB.LookupRightVector_o1_i = fy;
        rtB.LookupRightVector_o2_fo = -fx;
        break;
      }

     case CONST_CURVE:
      {
        double r;                      /* right angle */
        if (rs[i].data.const_curve.dir > 0.0) {
          r = p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts;
        } else {
          r = -p/(rs[i].data.const_curve.r) + rs[i].data.const_curve.ts
            + 3.14159265358979;
        }

        rtB.LookupRightVector_o1_i = cos(r);
        rtB.LookupRightVector_o2_fo = sin(r);
        break;
      }

     default :
      /* assign no value */
      break;
    }
  }

  /* DataTypeConversion: '<S71>/Data  Type  Conversion' incorporates:
   *  Gain: '<S73>/Gain'
   *  Product: '<S75>/Product'
   *  Sum: '<S75>/Sum1'
   */
  rtb_DataTypeConversion = rtb_Product_m_idx_0 * -rtB.LookupRightVector_o2_fo +
    rtb_Product_m_idx_1 * rtB.LookupRightVector_o1_i;

  /* DiscreteStateSpace: '<S71>/Controller' */
  {
    rtb_dsdt = 0.38289225536816662*rtDW.Controller_DSTATE;
    rtb_dsdt += 150.12503472222349*rtb_DataTypeConversion;
  }

  /* Sum: '<S74>/Sum' incorporates:
   *  DataTypeConversion: '<S72>/Conversion'
   *  Gain: '<S74>/Gain'
   *  UnitDelay: '<S74>/Unit Delay'
   */
  rtDW.UnitDelay_DSTATE_i = 0.01F * (real32_T)rtb_dsdt + rtB.UnitDelay;

  /* Update for UnitDelay: '<S2>/Unit Delay' */
  rtDW.UnitDelay_DSTATE[0] = rtB.UnitDelay;
  rtDW.UnitDelay_DSTATE[1] = rtB.Sum1;
  rtDW.UnitDelay_DSTATE[2] = rtB.DiscreteTimeIntegrator2;
  rtDW.UnitDelay_DSTATE[3] = rtB.Product1;

  /* Update for UnitDelay: '<S44>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_c = rtB.Quadrature_Decoder_o1;

  /* Update for UnitDelay: '<S40>/UD'
   *
   * Block description for '<S40>/UD':
   *
   *  Store in Global RAM
   */
  rtDW.UD_DSTATE = rtb_Gain_ie;

  /* Update for UnitDelay: '<S39>/UD'
   *
   * Block description for '<S39>/UD':
   *
   *  Store in Global RAM
   */
  rtDW.UD_DSTATE_f = rtb_Sum1_k;

  /* Update for DiscreteStateSpace: '<S71>/Controller' */
  {
    real_T xnew[1];
    xnew[0] = 1.0*rtDW.Controller_DSTATE;
    xnew[0] += 0.65292519369349644*rtb_DataTypeConversion;
    (void) memcpy(&rtDW.Controller_DSTATE, xnew,
                  sizeof(real_T)*1);
  }

  /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Top' */

  /* RateTransition: '<Root>/Rate Transition' incorporates:
   *  Product: '<S49>/Product'
   *  Product: '<S56>/Product'
   *  Product: '<S57>/Product'
   *  Product: '<S58>/Product'
   *  Product: '<S59>/Product'
   *  Product: '<S60>/Product'
   *  Product: '<S61>/Product'
   *  SignalConversion generated from: '<S2>/Serial'
   *  Sum: '<S49>/Sum'
   *  Sum: '<S56>/Sum'
   *  Sum: '<S57>/Sum'
   *  Sum: '<S58>/Sum'
   *  Sum: '<S59>/Sum'
   *  Sum: '<S60>/Sum'
   *  Sum: '<S61>/Sum'
   */
  if (rtM->Timing.RateInteraction.TID1_2) {
    /* S-Function (fcgen): '<Root>/Function-Call Top' incorporates:
     *  SubSystem: '<Root>/High Level Design'
     */
    rtDW.RateTransition_Buffer[0] = rtB.Sum1 * rtB.LookupRightVector1_o1 +
      rtB.LookupP1_o1;
    rtDW.RateTransition_Buffer[1] = rtB.Sum1 * rtB.LookupRightVector1_o2 +
      rtB.LookupP1_o2;
    rtDW.RateTransition_Buffer[2] = rtB.DiscreteTimeIntegrator2;
    rtDW.RateTransition_Buffer[3] = rtB.DiscreteTimeIntegrator;
    rtDW.RateTransition_Buffer[4] = rtB.snpsiusCars16[1] *
      rtB.LookupRightVector1_o1_j + rtB.LookupP1_o1_j;
    rtDW.RateTransition_Buffer[5] = rtB.snpsiusCars16[1] *
      rtB.LookupRightVector1_o2_m + rtB.LookupP1_o2_m;
    rtDW.RateTransition_Buffer[6] = rtB.snpsiusCars16[2];
    rtDW.RateTransition_Buffer[7] = rtB.snpsiusCars16[5] *
      rtB.LookupRightVector1_o1_i + rtB.LookupP1_o1_f;
    rtDW.RateTransition_Buffer[8] = rtB.snpsiusCars16[5] *
      rtB.LookupRightVector1_o2_d + rtB.LookupP1_o2_p;
    rtDW.RateTransition_Buffer[9] = rtB.snpsiusCars16[6];
    rtDW.RateTransition_Buffer[10] = rtB.snpsiusCars16[9] *
      rtB.LookupRightVector1_o1_a + rtB.LookupP1_o1_jz;
    rtDW.RateTransition_Buffer[11] = rtB.snpsiusCars16[9] *
      rtB.LookupRightVector1_o2_j + rtB.LookupP1_o2_pi;
    rtDW.RateTransition_Buffer[12] = rtB.snpsiusCars16[10];
    rtDW.RateTransition_Buffer[13] = rtB.snpsiusCars16[13] *
      rtB.LookupRightVector1_o1_c + rtB.LookupP1_o1_a;
    rtDW.RateTransition_Buffer[14] = rtB.snpsiusCars16[13] *
      rtB.LookupRightVector1_o2_e + rtB.LookupP1_o2_l;
    rtDW.RateTransition_Buffer[15] = rtB.snpsiusCars16[14];
    rtDW.RateTransition_Buffer[16] = rtB.snpsiusCars16[17] *
      rtB.LookupRightVector1_o1_iv + rtB.LookupP1_o1_c;
    rtDW.RateTransition_Buffer[17] = rtB.snpsiusCars16[17] *
      rtB.LookupRightVector1_o2_f + rtB.LookupP1_o2_e;
    rtDW.RateTransition_Buffer[18] = rtB.snpsiusCars16[18];
    rtDW.RateTransition_Buffer[19] = rtB.snpsiusCars16[21] *
      rtB.LookupRightVector1_o1_je + rtB.LookupP1_o1_g;
    rtDW.RateTransition_Buffer[20] = rtB.snpsiusCars16[21] *
      rtB.LookupRightVector1_o2_b + rtB.LookupP1_o2_n;
    rtDW.RateTransition_Buffer[21] = rtB.snpsiusCars16[22];

    /* End of Outputs for S-Function (fcgen): '<Root>/Function-Call Top' */
  }

  /* End of RateTransition: '<Root>/Rate Transition' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.01, which is the step size
   * of the task. Size of "clockTick1" ensures timer will not overflow during the
   * application lifespan selected.
   */
  rtM->Timing.clockTick1++;
}

/* Model step function for TID2 */
void Final_project_template_step2(void) /* Sample time: [0.05s, 0.0s] */
{
  /* RateTransition: '<Root>/Rate Transition' */
  memcpy(&rtB.RateTransition[0], &rtDW.RateTransition_Buffer[0], 22U * sizeof
         (real32_T));

  /* S-Function (fcgen): '<S4>/Function-Call Generator1' incorporates:
   *  SubSystem: '<S4>/Serial'
   */
  /* S-Function (slrealtimebytepacking): '<S77>/Byte Packing ' */

  /* Byte Packing: <S77>/Byte Packing  */
  (void)memcpy((uint8_T*)&rtB.BytePacking[0] + 0, (uint8_T*)&rtB.RateTransition
               [0], 88);

  /* Logic: '<S77>/NOT' incorporates:
   *  Delay: '<S77>/Delay'
   */
  rtDW.Delay_DSTATE_j = !rtDW.Delay_DSTATE_j;

  /* End of Outputs for S-Function (fcgen): '<S4>/Function-Call Generator1' */

  /* RateTransition: '<S4>/RT' incorporates:
   *  Delay: '<S77>/Delay'
   */
  rtDW.RT_Buffer0 = rtDW.Delay_DSTATE_j;

  /* S-Function (fcgen): '<S4>/Function-Call Generator1' incorporates:
   *  SubSystem: '<S4>/Serial'
   */
  /* RateTransition: '<S4>/RT1' incorporates:
   *  Constant: '<S77>/Constant2'
   *  Constant: '<S77>/Constant3'
   *  SignalConversion generated from: '<S77>/data_out'
   */
  rtDW.RT1_Buffer0[0] = 115U;
  memcpy(&rtDW.RT1_Buffer0[1], &rtB.BytePacking[0], 88U * sizeof(uint8_T));
  rtDW.RT1_Buffer0[89] = 101U;

  /* End of Outputs for S-Function (fcgen): '<S4>/Function-Call Generator1' */
}

/* Model initialize function */
void Final_project_template_initialize(void)
{
  /* Start for S-Function (fcan_s32k_config): '<Root>/FCAN_Config' */
  {
    const flexcan_user_config_t canCom0_InitConfig = {
      .pe_clock = FLEXCAN_CLK_SOURCE_PERIPH,
      .max_num_mb = 32U,
      .num_id_filters = FLEXCAN_RX_FIFO_ID_FILTERS_8,
      .is_rx_fifo_needed = false,
      .flexcanMode = FLEXCAN_NORMAL_MODE,

      /* Bitrate: 500U and clock frequency: 80000000U */
      .bitrate = {
        .propSeg = 2U,
        .phaseSeg1 = 3U,
        .phaseSeg2 = 1U,
        .preDivider = 15U,
        .rJumpwidth = 1U
      },

      /* Bitrate: 2000U and clock frequency: 80000000U for dataPhase */
      .bitrate_cbt = {
        .propSeg = 6U,
        .phaseSeg1 = 6U,
        .phaseSeg2 = 6U,
        .preDivider = 2U,
        .rJumpwidth = 2U
      },
      .fd_enable = false,
      .payload = FLEXCAN_PAYLOAD_SIZE_8,
      .rxFifoDMAChannel = 0U,
      .transfer_type = FLEXCAN_RXFIFO_USING_INTERRUPTS,
    };

    /* CAN RX pin config */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);
    PINS_DRV_SetMuxModeSel(PORTE, 4, PORT_MUX_ALT5);

    /* CAN TX pin config */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);
    PINS_DRV_SetMuxModeSel(PORTE, 5, PORT_MUX_ALT5);

    /* Enable CAN0 clock */
    PCC_SetClockMode(PCC, PCC_FlexCAN0_CLOCK, true);
    FLEXCAN_DRV_Init(0, &canCom0_State, &canCom0_InitConfig);
  }

  /* Start for S-Function (lpuart_s32k_config): '<Root>/LPUART_Config' */
  {
    static lpuart_state_t lpuartState;

    /* Enable clock for PORTC */
    PCC_SetClockMode(PCC, PCC_PORTC_CLOCK, true);

    /* Configure pin for RX function */
    PINS_SetMuxModeSel(PORTC, 6, PORT_MUX_ALT2);

    /* Enable clock for PORTC */
    PCC_SetClockMode(PCC, PCC_PORTC_CLOCK, true);

    /* Configure pin for TX function */
    PINS_SetMuxModeSel(PORTC, 7, PORT_MUX_ALT2);

    /* Set LPUART clock source */
    PCC_SetPeripheralClockControl(PCC, PCC_LPUART1_CLOCK, true,
      CLK_SRC_FIRC_DIV2, 0, 0);

    /* Enable LPUART clock */
    PCC_SetClockMode(PCC, PCC_LPUART1_CLOCK, true);
    const lpuart_user_config_t lpuart1_config = {
      .transferType = LPUART_USING_INTERRUPTS,
      .baudRate = 115200U,
      .parityMode = LPUART_PARITY_DISABLED,
      .stopBitCount = LPUART_ONE_STOP_BIT,
      .bitCountPerChar = LPUART_8_BITS_PER_CHAR,
      .rxDMAChannel = 0U,
      .txDMAChannel = 0U,
    };

    /* Initializes a LPUART instance for operation */
    LPUART_DRV_Init(1, &lpuartState, &lpuart1_config);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 16, &rxInfo, 0x0F);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 16, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive1' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 17, &rxInfo, 0x10);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 17, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive10' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 12, &rxInfo, 0x41);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 12, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive11' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 13, &rxInfo, 0x42);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 13, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive12' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 2, &rxInfo, 0x4b);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 2, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive13' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 3, &rxInfo, 0x4c);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 3, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive14' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 14, &rxInfo, 0x69);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 14, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive15' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 15, &rxInfo, 0x6a);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 15, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive2' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 4, &rxInfo, 0x19);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 4, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive3' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 5, &rxInfo, 0x1a);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 5, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive4' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 6, &rxInfo, 0x23);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 6, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive5' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 7, &rxInfo, 0x24);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 7, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive6' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 8, &rxInfo, 0x2d);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 8, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive7' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 9, &rxInfo, 0x2e);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 9, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive8' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 10, &rxInfo, 0x37);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 10, 0x0);
  }

  /* Start for S-Function (fcan_s32k_receive): '<S5>/FCAN_Receive9' */
  {
    flexcan_msgbuff_id_type_t msg_id_type = FLEXCAN_MSG_ID_STD;
    flexcan_data_info_t rxInfo = {
      .msg_id_type = FLEXCAN_MSG_ID_STD,
      .data_length = 8,
      .fd_enable = false,
      .fd_padding = 0,
      .enable_brs = false,
      .is_remote = false
    };

    FLEXCAN_DRV_ConfigRxMb(0, 11, &rxInfo, 0x38);
    FLEXCAN_DRV_SetRxMaskType(0, FLEXCAN_RX_MASK_INDIVIDUAL);
    FLEXCAN_DRV_SetRxIndividualMask(0, msg_id_type, 11, 0x0);
  }

  /* Start for S-Function (ftm_s32k_pwm_config): '<S3>/FTM_PWM_Config' incorporates:
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   */

  /* Enable clock for PORTB */
  PCC_SetClockMode (PCC, PCC_PORTB_CLOCK, true);

  /* Pin is configured for FTM function */
  PINS_SetMuxModeSel (PORTB, 8, PORT_MUX_ALT2);

  /* Set FTM_3 clock source */
  PCC_SetPeripheralClockControl (PCC, FTM3_CLK, true, CLK_SRC_SPLL, 0, 0);

  /* Enable clock for FTM_3 */
  PCC_SetClockMode (PCC, FTM3_CLK, true);

  /* PWM3 initialization */
  FTM_DRV_Init (FTM_PWM3, &flexTimer_pwm3_InitConfig, &ftmStateStruct3);
  FTM_DRV_InitPwm (FTM_PWM3, &flexTimer_pwm3_PwmConfig);
  FTM_DRV_SetChnTriggerCmd(FTM3, 1, false);

  /* Start for S-Function (adc_s32k_config): '<Root>/ADC_Config' */
  {
    const adc_converter_config_t adc0_cfg = {
      .clockDivide = ADC_CLK_DIVIDE_1,
      .sampleTime = 1U,
      .resolution = ADC_RESOLUTION_12BIT,
      .inputClock = ADC_CLK_ALT_1,
      .trigger = ADC_TRIGGER_SOFTWARE,
      .pretriggerSel = ADC_PRETRIGGER_SEL_PDB,
      .triggerSel = ADC_TRIGGER_SEL_TRGMUX,
      .dmaEnable = true,
      .voltageRef = ADC_VOLTAGEREF_VREF,
      .continuousConvEnable = false,
      .supplyMonitoringEnable = false
    };

    const adc_compare_config_t adc0_cmp_cfg = {
      .compareEnable = false,
      .compareGreaterThanEnable = false,
      .compareRangeFuncEnable = false,
      .compVal1 = 0,
      .compVal2 = 0
    };

    const adc_average_config_t adc0_avrg_cfg = {
      .hwAvgEnable = false,
      .hwAverage = ADC_AVERAGE_4
    };

    /* Enable ADC0 clock */
    PCC_SetClockMode(PCC, PCC_ADC0_CLOCK, false);

    /* Set ADC0 clock source */
    PCC_SetPeripheralClockControl(PCC, PCC_ADC0_CLOCK, true, CLK_SRC_SPLL, 0, 0);

    /* Enable ADC0 clock */
    PCC_SetClockMode(PCC, PCC_ADC0_CLOCK, true);
    ADC_DRV_Reset(0);

    /* Configure ADC0 */
    ADC_DRV_ConfigConverter(0, &adc0_cfg);
    ADC_DRV_SetSwPretrigger(0,ADC_SW_PRETRIGGER_DISABLED);
    ADC_DRV_ConfigHwCompare(0, &adc0_cmp_cfg);
    ADC_DRV_ConfigHwAverage(0, &adc0_avrg_cfg);

    /* Do calibration before initialize the ADC0. */
    ADC_DRV_AutoCalibration(0);
  }

  rtPrevZCX.ResettableSubsystem_Reset_ZCE = UNINITIALIZED_ZCSIG;

  /* SystemInitialize for S-Function (fcan_s32k_isr): '<S1>/FCAN_Isr' */
  FLEXCAN_DRV_InstallEventCallback(0, fcan0_s32k_rx_isr, (void *)0);

  /* SystemInitialize for S-Function (fcgen): '<Root>/Function-Call Top' incorporates:
   *  SubSystem: '<Root>/High Level Design'
   */
  /* Start for S-Function (gpio_s32k_input): '<S27>/Digital_Input' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin14 = {
      .base = PORTE,
      .pinPortIdx = 14,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE14. */
    PINS_DRV_Init(1, &gpioPORTEPin14);
  }

  /* Start for S-Function (gpio_s32k_output): '<S25>/Digital_Output' */
  {
    /* Enable clock for PORTD */
    PCC_SetClockMode(PCC, PCC_PORTD_CLOCK, true);

    /* Configure the output port init structure. */
    const pin_settings_config_t gpioPORTDPin8 = {
      .base = PORTD,
      .pinPortIdx = 8,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTD,
      .direction = GPIO_OUTPUT_DIRECTION,
      .initValue = 0U
    };

    /* Initialize GPIPORTD8. */
    PINS_DRV_Init(1, &gpioPORTDPin8);
  }

  /* Start for S-Function (gpio_s32k_output): '<S25>/Digital_Output1' */
  {
    /* Enable clock for PORTD */
    PCC_SetClockMode(PCC, PCC_PORTD_CLOCK, true);

    /* Configure the output port init structure. */
    const pin_settings_config_t gpioPORTDPin9 = {
      .base = PORTD,
      .pinPortIdx = 9,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTD,
      .direction = GPIO_OUTPUT_DIRECTION,
      .initValue = 0U
    };

    /* Initialize GPIPORTD9. */
    PINS_DRV_Init(1, &gpioPORTDPin9);
  }

  /* Start for S-Function (gpio_s32k_output): '<S25>/Digital_Output2' */
  {
    /* Enable clock for PORTD */
    PCC_SetClockMode(PCC, PCC_PORTD_CLOCK, true);

    /* Configure the output port init structure. */
    const pin_settings_config_t gpioPORTDPin10 = {
      .base = PORTD,
      .pinPortIdx = 10,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTD,
      .direction = GPIO_OUTPUT_DIRECTION,
      .initValue = 0U
    };

    /* Initialize GPIPORTD10. */
    PINS_DRV_Init(1, &gpioPORTDPin10);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin6 = {
      .base = PORTE,
      .pinPortIdx = 6,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE6. */
    PINS_DRV_Init(1, &gpioPORTEPin6);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input1' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin7 = {
      .base = PORTE,
      .pinPortIdx = 7,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE7. */
    PINS_DRV_Init(1, &gpioPORTEPin7);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input2' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin8 = {
      .base = PORTE,
      .pinPortIdx = 8,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE8. */
    PINS_DRV_Init(1, &gpioPORTEPin8);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input3' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin9 = {
      .base = PORTE,
      .pinPortIdx = 9,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE9. */
    PINS_DRV_Init(1, &gpioPORTEPin9);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input4' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin10 = {
      .base = PORTE,
      .pinPortIdx = 10,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE10. */
    PINS_DRV_Init(1, &gpioPORTEPin10);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input5' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin11 = {
      .base = PORTE,
      .pinPortIdx = 11,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE11. */
    PINS_DRV_Init(1, &gpioPORTEPin11);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input6' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin12 = {
      .base = PORTE,
      .pinPortIdx = 12,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE12. */
    PINS_DRV_Init(1, &gpioPORTEPin12);
  }

  /* Start for S-Function (gpio_s32k_input): '<S41>/Digital_Input7' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin13 = {
      .base = PORTE,
      .pinPortIdx = 13,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE13. */
    PINS_DRV_Init(1, &gpioPORTEPin13);
  }

  /* Start for S-Function (ftm_s32k_quadrature_decoder): '<S43>/Quadrature_Decoder' */
  {
    ftm_user_config_t ftm2_qd_InitConfig = {
      {
        true,                          /* Software trigger state */
        false,                         /* Hardware trigger 1 state */
        false,                         /* Hardware trigger 2 state */
        false,                         /* Hardware trigger 3 state */
        false,                         /* Max loading point state */
        false,                         /* Min loading point state */
        FTM_SYSTEM_CLOCK,              /* Update mode for INVCTRL register */
        FTM_SYSTEM_CLOCK,              /* Update mode for SWOCTRL register */
        FTM_SYSTEM_CLOCK,              /* Update mode for OUTMASK register */
        FTM_SYSTEM_CLOCK,              /* Update mode for CNTIN register */
        false,                         /* Automatic clear of the trigger*/
        FTM_UPDATE_NOW,                /* Synchronization point */
      },
      FTM_MODE_QUADRATURE_DECODER,     /* Mode of operation for FTM */
      FTM_CLOCK_DIVID_BY_1,            /* FTM clock prescaler */
      FTM_CLOCK_SOURCE_SYSTEMCLK,      /* FTM clock source */
      FTM_BDM_MODE_00,                 /* FTM debug mode */
      false,                           /* Interrupt state */
      false                            /* Initialization trigger */
    };

    ftm_quad_decode_config_t ftm2_qd_Params = {
      FTM_QUAD_PHASE_ENCODE,           /* Quadrature decoder mode */
      0,                               /* Initial counter value */
      65535,                           /* Maximum counter value */

      {
        false,                         /* Filter state */
        0,                             /* Filter value */
        FTM_QUAD_PHASE_NORMAL          /* Phase polarity */
      },

      {
        false,                         /* Filter state */
        0,                             /* Filter value */
        FTM_QUAD_PHASE_NORMAL          /* Phase polarity */
      }
    };

    /* Enable clock for PORTA */
    PCC_SetClockMode(PCC, PCC_PORTA_CLOCK, true);

    /* Pin is configured for FTM function */
    PINS_SetMuxModeSel(PORTA, 13, PORT_MUX_ALT6);

    /* Enable clock for PORTA */
    PCC_SetClockMode(PCC, PCC_PORTA_CLOCK, true);

    /* Pin is configured for FTM function */
    PINS_SetMuxModeSel(PORTA, 12, PORT_MUX_ALT6);

    /* Set FTM_2 clock source */
    PCC_SetPeripheralClockControl (PCC, FTM2_CLK, true, CLK_SRC_SPLL, 0, 0);

    /* Enable clock for FTM_2 */
    PCC_SetClockMode (PCC, FTM2_CLK, true);

    /* Initialize FTM instance QD decoder*/
    static ftm_state_t ftm2StateStruct;
    FTM_DRV_Init(2, &ftm2_qd_InitConfig, &ftm2StateStruct);

    /* Start QD decoder*/
    FTM_DRV_QuadDecodeStart(2, &ftm2_qd_Params);
  }

  /* Start for S-Function (gpio_s32k_input): '<S27>/Digital_Input1' */
  {
    /* Enable clock for PORTE */
    PCC_SetClockMode(PCC, PCC_PORTE_CLOCK, true);

    /* Configure the input port init structure. */
    const pin_settings_config_t gpioPORTEPin15 = {
      .base = PORTE,
      .pinPortIdx = 15,
      .pullConfig = PORT_INTERNAL_PULL_NOT_ENABLED,
      .passiveFilter = false,
      .driveSelect = PORT_LOW_DRIVE_STRENGTH,
      .mux = PORT_MUX_AS_GPIO,
      .pinLock = false,
      .intConfig = PORT_DMA_INT_DISABLED,
      .clearIntFlag = true,
      .gpioBase = PTE,
      .direction = GPIO_INPUT_DIRECTION,
    };

    /* Initialize GPIPORTE15. */
    PINS_DRV_Init(1, &gpioPORTEPin15);
  }

  /* Start for S-Function (ftm_s32k_pwm_config): '<S48>/FTM_PWM_Config' incorporates:
   *  Constant: '<S48>/Constant'
   */

  /* Enable clock for PORTB */
  PCC_SetClockMode (PCC, PCC_PORTB_CLOCK, true);

  /* Pin is configured for FTM function */
  PINS_SetMuxModeSel (PORTB, 12, PORT_MUX_ALT2);

  /* Set FTM_0 clock source */
  PCC_SetPeripheralClockControl (PCC, FTM0_CLK, true, CLK_SRC_SPLL, 0, 0);

  /* Enable clock for FTM_0 */
  PCC_SetClockMode (PCC, FTM0_CLK, true);

  /* PWM0 initialization */
  FTM_DRV_Init (FTM_PWM0, &flexTimer_pwm0_InitConfig, &ftmStateStruct0);
  FTM_DRV_InitPwm (FTM_PWM0, &flexTimer_pwm0_PwmConfig);
  FTM_DRV_SetChnTriggerCmd(FTM0, 1, false);

  /* Enable for S-Function (fcgen): '<Root>/Function-Call Top' incorporates:
   *  SubSystem: '<Root>/High Level Design'
   */
  rtDW.HighLevelDesign_RESET_ELAPS_T = true;

  /* Enable for Atomic SubSystem: '<S29>/Vehicle Dynamics' */
  /* Enable for DiscreteIntegrator: '<S65>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_SYSTEM_E = 1U;

  /* Enable for DiscreteIntegrator: '<S67>/Discrete-Time Integrator2' */
  rtDW.DiscreteTimeIntegrator2_SYSTEM_ = 1U;

  /* Enable for DiscreteIntegrator: '<S67>/Discrete-Time Integrator' */
  rtDW.DiscreteTimeIntegrator_SYSTEM_b = 1U;

  /* Enable for DiscreteIntegrator: '<S67>/Discrete-Time Integrator1' */
  rtDW.DiscreteTimeIntegrator1_SYSTEM_ = 1U;

  /* End of Enable for SubSystem: '<S29>/Vehicle Dynamics' */
  /* End of Enable for S-Function (fcgen): '<Root>/Function-Call Top' */
}

/* Model terminate function */
void Final_project_template_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
