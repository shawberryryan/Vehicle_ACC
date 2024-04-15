/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Final_project_template_private.h
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

#ifndef RTW_HEADER_Final_project_template_private_h_
#define RTW_HEADER_Final_project_template_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "Final_project_template.h"
#include "Final_project_template_types.h"
#include "path_data.h"
#include "path_data.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#ifdef __cplusplus
#define SFB_EXTERN_C                   extern "C"
#else
#define SFB_EXTERN_C                   extern
#endif

SFB_EXTERN_C void model_Start_wrapper(const real32_T *L1, const int_T p_width0,
  const real32_T *L2, const int_T p_width1);
SFB_EXTERN_C void model_Outputs_wrapper(const real32_T *u,
  const real32_T *delta,
  const real32_T *psi,
  real32_T *xdot,
  real32_T *ydot,
  real32_T *psidot,
  const real32_T *L1, const int_T p_width0,
  const real32_T *L2, const int_T p_width1);
SFB_EXTERN_C void model_Terminate_wrapper(const real32_T *L1, const int_T
  p_width0,
  const real32_T *L2, const int_T p_width1);

#undef SFB_EXTERN_C
#ifdef __cplusplus
#define SFB_EXTERN_C                   extern "C"
#else
#define SFB_EXTERN_C                   extern
#endif

SFB_EXTERN_C void ahead_logic_Start_wrapper(void);
SFB_EXTERN_C void ahead_logic_Outputs_wrapper(const real32_T *u,
  real32_T *s_out,
  real32_T *us_out);
SFB_EXTERN_C void ahead_logic_Terminate_wrapper(void);

#undef SFB_EXTERN_C

extern flexcan_state_t canCom0_State;
extern flexcan_msgbuff_t canCom0_recvBuff16;
extern flexcan_msgbuff_t canCom0_recvBuff17;
extern flexcan_msgbuff_t canCom0_recvBuff12;
extern flexcan_msgbuff_t canCom0_recvBuff13;
extern flexcan_msgbuff_t canCom0_recvBuff2;
extern flexcan_msgbuff_t canCom0_recvBuff3;
extern flexcan_msgbuff_t canCom0_recvBuff14;
extern flexcan_msgbuff_t canCom0_recvBuff15;
extern flexcan_msgbuff_t canCom0_recvBuff4;
extern flexcan_msgbuff_t canCom0_recvBuff5;
extern flexcan_msgbuff_t canCom0_recvBuff6;
extern flexcan_msgbuff_t canCom0_recvBuff7;
extern flexcan_msgbuff_t canCom0_recvBuff8;
extern flexcan_msgbuff_t canCom0_recvBuff9;
extern flexcan_msgbuff_t canCom0_recvBuff10;
extern flexcan_msgbuff_t canCom0_recvBuff11;

#if defined(__MWERKS__)

double fmod (double x, double y);
double fabs (double);

#endif

extern void SwitchCaseActionSubsystem2(const uint8_T rtu_sn[8], real32_T *rty_s,
  real32_T *rty_n);
extern void SwitchCaseActionSubsystem3(const uint8_T rtu_psius[8], real32_T
  *rty_psi, real32_T *rty_us);

#endif                        /* RTW_HEADER_Final_project_template_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
