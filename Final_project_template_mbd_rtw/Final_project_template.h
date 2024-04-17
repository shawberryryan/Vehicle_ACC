/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Final_project_template.h
 *
 * Code generated for Simulink model 'Final_project_template'.
 *
 * Model version                   : 10.22
 * Simulink Coder version          : 9.8 (R2022b) 13-May-2022
 * MBDT for S32K1xx Series Version : 4.3.0 (R2016a-R2022a) 13-Sep-2022
 * C/C++ source code generated on  : Thu Apr 11 13:55:15 2024
 *
 * Target selection: mbd_s32k.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objective: Traceability
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Final_project_template_h_
#define RTW_HEADER_Final_project_template_h_
#ifndef Final_project_template_COMMON_INCLUDES_
#define Final_project_template_COMMON_INCLUDES_
#include <string.h>
#include "rtwtypes.h"
#include "pcc_hw_access.h"
#include "pins_driver.h"
#include "adc_driver.h"
#include "ftm_qd_driver.h"
#include "clock_manager.h"
#include "ftm_hw_access.h"
#include "pins_port_hw_access.h"
#include "flexcan_hw_access.h"
#include "ftm_pwm_driver.h"
#include "ftm0_pwm_params.h"
#include "ftm3_pwm_params.h"
#include "lpuart_driver.h"
#include "device_registers.h"
#include "flexcan_driver.h"
#include "lin_lpuart_driver.h"
#include "lpuart_hw_access.h"
#include "interrupt_manager.h"
#include "fcan0_s32k_rx_isr.h"
#endif                             /* Final_project_template_COMMON_INCLUDES_ */

#include "Final_project_template_types.h"
#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#define Final_project_template_M       (rtM)

/* user code (top of header file) */
#include <math.h>

/* Block states (default storage) for system '<S7>/Switch Case Action Subsystem2' */
typedef struct {
  int_T ByteUnpacking_IWORK[4];        /* '<S13>/Byte Unpacking ' */
} DW_SwitchCaseActionSubsystem2;

/* Block states (default storage) for system '<S7>/Switch Case Action Subsystem3' */
typedef struct {
  int_T ByteUnpacking_IWORK[4];        /* '<S14>/Byte Unpacking ' */
} DW_SwitchCaseActionSubsystem3;

/* Block signals (default storage) */
typedef struct {
  uint32_T FCAN_Isr_o3;                /* '<S1>/FCAN_Isr' */
  uint32_T ADC_Start;                  /* '<S37>/ADC_Start' */
  real32_T RateTransition[22];         /* '<Root>/Rate Transition' */
  real32_T snpsiusCars16[24];          /* '<S2>/s,n,psi,us (Cars 1-6)' */
  real32_T TmpSignalConversionAtSFunctionB[28];
  real32_T SFunctionBuilder_o1;        /* '<S29>/S-Function Builder' */
  real32_T SFunctionBuilder_o2;        /* '<S29>/S-Function Builder' */
  real32_T Merge;                      /* '<S25>/Merge' */
  real32_T Gain;                       /* '<S26>/Gain' */
  real32_T UnitDelay;                  /* '<S69>/Unit Delay' */
  real32_T LookupP_o1;                 /* '<S66>/Look up P' */
  real32_T LookupP_o2;                 /* '<S66>/Look up P' */
  real32_T LookupRightVector_o1;       /* '<S66>/Look up Right Vector' */
  real32_T LookupRightVector_o2;       /* '<S66>/Look up Right Vector' */
  real32_T Sum1;                       /* '<S71>/Sum1' */
  real32_T LookupRightVector1_o1;      /* '<S44>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2;      /* '<S44>/Look up Right Vector1' */
  real32_T LookupP1_o1;                /* '<S44>/Look up P1' */
  real32_T LookupP1_o2;                /* '<S44>/Look up P1' */
  real32_T LookupRightVector1_o1_j;    /* '<S51>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2_m;    /* '<S51>/Look up Right Vector1' */
  real32_T LookupP1_o1_j;              /* '<S51>/Look up P1' */
  real32_T LookupP1_o2_m;              /* '<S51>/Look up P1' */
  real32_T LookupRightVector1_o1_i;    /* '<S52>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2_d;    /* '<S52>/Look up Right Vector1' */
  real32_T LookupP1_o1_f;              /* '<S52>/Look up P1' */
  real32_T LookupP1_o2_p;              /* '<S52>/Look up P1' */
  real32_T LookupRightVector1_o1_a;    /* '<S53>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2_j;    /* '<S53>/Look up Right Vector1' */
  real32_T LookupP1_o1_jz;             /* '<S53>/Look up P1' */
  real32_T LookupP1_o2_pi;             /* '<S53>/Look up P1' */
  real32_T LookupRightVector1_o1_c;    /* '<S54>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2_e;    /* '<S54>/Look up Right Vector1' */
  real32_T LookupP1_o1_a;              /* '<S54>/Look up P1' */
  real32_T LookupP1_o2_l;              /* '<S54>/Look up P1' */
  real32_T LookupRightVector1_o1_iv;   /* '<S55>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2_f;    /* '<S55>/Look up Right Vector1' */
  real32_T LookupP1_o1_c;              /* '<S55>/Look up P1' */
  real32_T LookupP1_o2_e;              /* '<S55>/Look up P1' */
  real32_T LookupRightVector1_o1_je;   /* '<S56>/Look up Right Vector1' */
  real32_T LookupRightVector1_o2_b;    /* '<S56>/Look up Right Vector1' */
  real32_T LookupP1_o1_g;              /* '<S56>/Look up P1' */
  real32_T LookupP1_o2_n;              /* '<S56>/Look up P1' */
  real32_T LookupRightVector_o1_j;     /* '<S65>/Look up Right Vector' */
  real32_T LookupRightVector_o2_f;     /* '<S65>/Look up Right Vector' */
  real32_T Product1;                   /* '<S64>/Product1' */
  real32_T Saturation;                 /* '<S57>/Saturation' */
  real32_T LookupRightVector_o1_i;     /* '<S68>/Look up Right Vector' */
  real32_T LookupRightVector_o2_fo;    /* '<S68>/Look up Right Vector' */
  real32_T DiscreteTimeIntegrator;     /* '<S60>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator2;    /* '<S62>/Discrete-Time Integrator2' */
  real32_T SFunctionBuilder_o1_b;      /* '<S61>/S-Function Builder' */
  real32_T SFunctionBuilder_o2_i;      /* '<S61>/S-Function Builder' */
  real32_T SFunctionBuilder_o3;        /* '<S61>/S-Function Builder' */
  real32_T ByteUnpacking_o1;           /* '<S24>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2;           /* '<S24>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_f;         /* '<S23>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_n;         /* '<S23>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_f4;        /* '<S22>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_m;         /* '<S22>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_o;         /* '<S21>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_j;         /* '<S21>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_c;         /* '<S20>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_c;         /* '<S20>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_o0;        /* '<S19>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_p;         /* '<S19>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_a;         /* '<S18>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_j1;        /* '<S18>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_i;         /* '<S17>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_i;         /* '<S17>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_az;        /* '<S16>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_b;         /* '<S16>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_o3;        /* '<S15>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_h;         /* '<S15>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_b;         /* '<S14>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_nz;        /* '<S14>/Byte Unpacking ' */
  real32_T ByteUnpacking_o1_m;         /* '<S13>/Byte Unpacking ' */
  real32_T ByteUnpacking_o2_k;         /* '<S13>/Byte Unpacking ' */
  uint16_T FCAN_Isr_o6;                /* '<S1>/FCAN_Isr' */
  uint16_T Quadrature_Decoder_o1;      /* '<S38>/Quadrature_Decoder' */
  uint8_T RT1[90];                     /* '<S4>/RT1' */
  uint8_T FCAN_Isr_o2;                 /* '<S1>/FCAN_Isr' */
  uint8_T FCAN_Isr_o4[8];              /* '<S1>/FCAN_Isr' */
  uint8_T FCAN_Isr_o5;                 /* '<S1>/FCAN_Isr' */
  uint8_T IndexVector;                 /* '<S73>/Index Vector' */
  uint8_T BytePacking[88];             /* '<S72>/Byte Packing ' */
  uint8_T BytePack1[8];                /* '<S42>/Byte Pack1' */
  uint8_T BytePack[8];                 /* '<S42>/Byte Pack' */
  boolean_T RT_k;                      /* '<S4>/RT' */
  boolean_T Digital_Input;             /* '<S26>/Digital_Input' */
  boolean_T Digital_Input_g;           /* '<S36>/Digital_Input' */
  boolean_T Digital_Input1;            /* '<S36>/Digital_Input1' */
  boolean_T Digital_Input2;            /* '<S36>/Digital_Input2' */
  boolean_T Digital_Input3;            /* '<S36>/Digital_Input3' */
  boolean_T Digital_Input4;            /* '<S36>/Digital_Input4' */
  boolean_T Digital_Input5;            /* '<S36>/Digital_Input5' */
  boolean_T Digital_Input6;            /* '<S36>/Digital_Input6' */
  boolean_T Digital_Input7;            /* '<S36>/Digital_Input7' */
  boolean_T Quadrature_Decoder_o2;     /* '<S38>/Quadrature_Decoder' */
  boolean_T Quadrature_Decoder_o3;     /* '<S38>/Quadrature_Decoder' */
  boolean_T Quadrature_Decoder_o4;     /* '<S38>/Quadrature_Decoder' */
  boolean_T Digital_Input1_b;          /* '<S26>/Digital_Input1' */
  boolean_T man;                       /* '<S29>/Chart' */
  boolean_T vel;                       /* '<S29>/Chart' */
  boolean_T pos;                       /* '<S29>/Chart' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T Delay_DSTATE;                 /* '<S74>/Delay' */
  real_T Controller_DSTATE;            /* '<S66>/Controller' */
  real32_T UnitDelay_DSTATE[4];        /* '<S2>/Unit Delay' */
  real32_T UnitDelay1_DSTATE;          /* '<S39>/Unit Delay1' */
  real32_T UnitDelay_DSTATE_i;         /* '<S69>/Unit Delay' */
  real32_T DiscreteTimeIntegrator_DSTATE;/* '<S60>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator2_DSTATE;/* '<S62>/Discrete-Time Integrator2' */
  real32_T DiscreteTimeIntegrator_DSTATE_k;/* '<S62>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_DSTATE;/* '<S62>/Discrete-Time Integrator1' */
  real32_T UnitDelay_DSTATE_o;         /* '<S35>/Unit Delay' */
  real32_T RateTransition_Buffer[22];  /* '<Root>/Rate Transition' */
  real32_T DiscreteTimeIntegrator_PREV_U;/* '<S60>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator2_PREV_U;/* '<S62>/Discrete-Time Integrator2' */
  real32_T DiscreteTimeIntegrator_PREV_U_d;/* '<S62>/Discrete-Time Integrator' */
  real32_T DiscreteTimeIntegrator1_PREV_U;/* '<S62>/Discrete-Time Integrator1' */
  uint32_T HighLevelDesign_PREV_T;     /* '<Root>/High Level Design' */
  int_T BytePacking_IWORK[2];          /* '<S72>/Byte Packing ' */
  uint16_T UnitDelay_DSTATE_c;         /* '<S39>/Unit Delay' */
  boolean_T Delay_DSTATE_j;            /* '<S72>/Delay' */
  uint8_T RT1_Buffer0[90];             /* '<S4>/RT1' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_E;/* '<S60>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator2_SYSTEM_;/* '<S62>/Discrete-Time Integrator2' */
  uint8_T DiscreteTimeIntegrator_SYSTEM_b;/* '<S62>/Discrete-Time Integrator' */
  uint8_T DiscreteTimeIntegrator1_SYSTEM_;/* '<S62>/Discrete-Time Integrator1' */
  uint8_T is_c3_Final_project_template;/* '<S29>/Chart' */
  uint8_T is_active_c3_Final_project_temp;/* '<S29>/Chart' */
  boolean_T RT_Buffer0;                /* '<S4>/RT' */
  boolean_T HighLevelDesign_RESET_ELAPS_T;/* '<Root>/High Level Design' */
  DW_SwitchCaseActionSubsystem3 SwitchCaseActionSubsystem3_f;
                                     /* '<S12>/Switch Case Action Subsystem3' */
  DW_SwitchCaseActionSubsystem2 SwitchCaseActionSubsystem2_p;
                                     /* '<S12>/Switch Case Action Subsystem2' */
  DW_SwitchCaseActionSubsystem3 SwitchCaseActionSubsystem3_h;
                                     /* '<S11>/Switch Case Action Subsystem3' */
  DW_SwitchCaseActionSubsystem2 SwitchCaseActionSubsystem2_m0;
                                     /* '<S11>/Switch Case Action Subsystem2' */
  DW_SwitchCaseActionSubsystem3 SwitchCaseActionSubsystem3_o;
                                     /* '<S10>/Switch Case Action Subsystem3' */
  DW_SwitchCaseActionSubsystem2 SwitchCaseActionSubsystem2_e;
                                     /* '<S10>/Switch Case Action Subsystem2' */
  DW_SwitchCaseActionSubsystem3 SwitchCaseActionSubsystem3_l;
                                      /* '<S9>/Switch Case Action Subsystem3' */
  DW_SwitchCaseActionSubsystem2 SwitchCaseActionSubsystem2_c;
                                      /* '<S9>/Switch Case Action Subsystem2' */
  DW_SwitchCaseActionSubsystem3 SwitchCaseActionSubsystem3_n;
                                      /* '<S8>/Switch Case Action Subsystem3' */
  DW_SwitchCaseActionSubsystem2 SwitchCaseActionSubsystem2_m;
                                      /* '<S8>/Switch Case Action Subsystem2' */
  DW_SwitchCaseActionSubsystem3 SwitchCaseActionSubsystem3_d;
                                      /* '<S7>/Switch Case Action Subsystem3' */
  DW_SwitchCaseActionSubsystem2 SwitchCaseActionSubsystem2_a;
                                      /* '<S7>/Switch Case Action Subsystem2' */
} DW;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState ResettableSubsystem_Reset_ZCE;/* '<S73>/Resettable Subsystem' */
} PrevZCX;

/* Constant parameters (default storage) */
typedef struct {
  /* Pooled Parameter (Expression: single(1))
   * Referenced by: '<S61>/S-Function Builder'
   */
  real32_T pooled6;
} ConstP;

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T * volatile errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick1;
    struct {
      uint8_T TID[3];
    } TaskCounters;

    struct {
      boolean_T TID0_2;
      boolean_T TID1_2;
    } RateInteraction;
  } Timing;
};

/* Block signals (default storage) */
extern B rtB;

/* Block states (default storage) */
extern DW rtDW;

/* Zero-crossing (trigger) state */
extern PrevZCX rtPrevZCX;

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* External function called from main */
extern void Final_project_template_SetEventsForThisBaseStep(boolean_T
  *eventFlags);

/* Model entry point functions */
extern void Final_project_template_initialize(void);
extern void Final_project_template_step0(void);
extern void Final_project_template_step1(void);
extern void Final_project_template_step2(void);
extern void Final_project_template_terminate(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S29>/Display' : Unused code path elimination
 * Block '<S29>/Display1' : Unused code path elimination
 * Block '<S29>/Display2' : Unused code path elimination
 * Block '<S29>/Scope' : Unused code path elimination
 * Block '<S67>/Data Type Duplicate' : Unused code path elimination
 * Block '<S36>/Shift Arithmetic' : Eliminated trivial shift
 * Block '<S39>/Data Type Conversion' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Final_project_template'
 * '<S1>'   : 'Final_project_template/Can Network Inputs'
 * '<S2>'   : 'Final_project_template/High Level Design'
 * '<S3>'   : 'Final_project_template/SC Filter'
 * '<S4>'   : 'Final_project_template/Serial Sim Out to Virtual Sim'
 * '<S5>'   : 'Final_project_template/Can Network Inputs/Can Message Mailbox Setup'
 * '<S6>'   : 'Final_project_template/Can Network Inputs/Extract CAN data'
 * '<S7>'   : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us '
 * '<S8>'   : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 1'
 * '<S9>'   : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 2'
 * '<S10>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 3'
 * '<S11>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 4'
 * '<S12>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 5'
 * '<S13>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us /Switch Case Action Subsystem2'
 * '<S14>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us /Switch Case Action Subsystem3'
 * '<S15>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 1/Switch Case Action Subsystem2'
 * '<S16>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 1/Switch Case Action Subsystem3'
 * '<S17>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 2/Switch Case Action Subsystem2'
 * '<S18>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 2/Switch Case Action Subsystem3'
 * '<S19>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 3/Switch Case Action Subsystem2'
 * '<S20>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 3/Switch Case Action Subsystem3'
 * '<S21>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 4/Switch Case Action Subsystem2'
 * '<S22>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 4/Switch Case Action Subsystem3'
 * '<S23>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 5/Switch Case Action Subsystem2'
 * '<S24>'  : 'Final_project_template/Can Network Inputs/Extract CAN data/Data to s,n,psi,us 5/Switch Case Action Subsystem3'
 * '<S25>'  : 'Final_project_template/High Level Design/ACC'
 * '<S26>'  : 'Final_project_template/High Level Design/Inputs'
 * '<S27>'  : 'Final_project_template/High Level Design/Outputs'
 * '<S28>'  : 'Final_project_template/High Level Design/Vehicle Dynamics'
 * '<S29>'  : 'Final_project_template/High Level Design/ACC/ACC State Logic'
 * '<S30>'  : 'Final_project_template/High Level Design/ACC/Enabled Subsystem'
 * '<S31>'  : 'Final_project_template/High Level Design/ACC/Position Ctrl'
 * '<S32>'  : 'Final_project_template/High Level Design/ACC/Speed Ctrl'
 * '<S33>'  : 'Final_project_template/High Level Design/ACC/ACC State Logic/Chart'
 * '<S34>'  : 'Final_project_template/High Level Design/ACC/Speed Ctrl/PI'
 * '<S35>'  : 'Final_project_template/High Level Design/ACC/Speed Ctrl/PI/My Discrete Integrator'
 * '<S36>'  : 'Final_project_template/High Level Design/Inputs/Select Speed (GPI 122-129)'
 * '<S37>'  : 'Final_project_template/High Level Design/Inputs/Throttle (Potentiometer)'
 * '<S38>'  : 'Final_project_template/High Level Design/Inputs/get wheel position'
 * '<S39>'  : 'Final_project_template/High Level Design/Inputs/get wheel position/Subsystem'
 * '<S40>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi'
 * '<S41>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)'
 * '<S42>'  : 'Final_project_template/High Level Design/Outputs/Tx CAN'
 * '<S43>'  : 'Final_project_template/High Level Design/Outputs/write torque'
 * '<S44>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi/s,n to x,y'
 * '<S45>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi'
 * '<S46>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi1'
 * '<S47>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi2'
 * '<S48>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi3'
 * '<S49>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi4'
 * '<S50>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi5'
 * '<S51>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi/s,n to x,y'
 * '<S52>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi1/s,n to x,y'
 * '<S53>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi2/s,n to x,y'
 * '<S54>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi3/s,n to x,y'
 * '<S55>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi4/s,n to x,y'
 * '<S56>'  : 'Final_project_template/High Level Design/Outputs/Extract x,y,psi (Cars 1 - 6)/Extract x,y,psi5/s,n to x,y'
 * '<S57>'  : 'Final_project_template/High Level Design/Outputs/write torque/Write_Reaction_Torque'
 * '<S58>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/Vehicle Dynamics'
 * '<S59>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs'
 * '<S60>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/Vehicle Dynamics/Subsystem'
 * '<S61>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/Vehicle Dynamics/Subsystem1'
 * '<S62>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/Vehicle Dynamics/Subsystem2'
 * '<S63>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform'
 * '<S64>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/projected velocity'
 * '<S65>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/Look up Forward Vector'
 * '<S66>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/x,y to s,n'
 * '<S67>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/x,y to s,n/Data Type Conversion Inherited'
 * '<S68>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/x,y to s,n/Look up the Forward Vector'
 * '<S69>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/x,y to s,n/My Discrete Integrator'
 * '<S70>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/x,y to s,n/My Dot Product1'
 * '<S71>'  : 'Final_project_template/High Level Design/Vehicle Dynamics/outputs/coordinate transform/x,y to s,n/My Dot Product2'
 * '<S72>'  : 'Final_project_template/Serial Sim Out to Virtual Sim/Serial'
 * '<S73>'  : 'Final_project_template/Serial Sim Out to Virtual Sim/UART Iteration'
 * '<S74>'  : 'Final_project_template/Serial Sim Out to Virtual Sim/UART Iteration/Resettable Subsystem'
 */
#endif                                /* RTW_HEADER_Final_project_template_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
