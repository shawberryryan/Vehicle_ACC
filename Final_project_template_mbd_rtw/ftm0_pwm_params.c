#include "ftm0_pwm_params.h"

/* Fault configuration structure for FTM0 */
ftm_pwm_fault_param_t flexTimer_pwm0_FaultConfig = {
  false,                               /* Output pin state on fault */
  false,                               /* PWM fault interrupt state */
  0U,                                  /* Fault filter value */
  FTM_FAULT_CONTROL_DISABLED,          /* Fault mode */

  {
    {
      false,                        /* Fault channel state (Enabled/Disabled) */
      false,                 /* Fault channel filter state (Enabled/Disabled) */
      FTM_POLARITY_HIGH,               /* Channel output state on fault */
    },

    {
      false,                        /* Fault channel state (Enabled/Disabled) */
      false,                 /* Fault channel filter state (Enabled/Disabled) */
      FTM_POLARITY_HIGH,               /* Channel output state on fault */
    },

    {
      false,                        /* Fault channel state (Enabled/Disabled) */
      false,                 /* Fault channel filter state (Enabled/Disabled) */
      FTM_POLARITY_HIGH,               /* Channel output state on fault */
    },

    {
      false,                        /* Fault channel state (Enabled/Disabled) */
      false,                 /* Fault channel filter state (Enabled/Disabled) */
      FTM_POLARITY_HIGH,               /* Channel output state on fault */
    },
  }
};

/* Independent channels configuration structure for flexTimer_pwm0 */
ftm_independent_ch_param_t flexTimer_pwm0_IndependentChannelsConfig[2] = {
  {
    0U,                                /* hwChannelId */
    FTM_POLARITY_HIGH,                 /* Edge mode */
    16384U,                            /* Duty cycle percent 0-0x8000 */
    false,                             /* External Trigger */
    FTM_LOW_STATE,                   /* The selection of the channel (n) mode */
    false,                       /* Enabled/disabled the channel (n+1) output */
    FTM_MAIN_DUPLICATED,
                       /* Select channel (n+1) output relative to channel (n) */
    false,                             /* Dead time enabled/disabled */
  },

  {
    1U,                                /* hwChannelId */
    FTM_POLARITY_LOW,                  /* Edge mode */
    0U,                                /* Duty cycle percent 0-0x8000 */
    false,                             /* External Trigger */
    FTM_LOW_STATE,                   /* The selection of the channel (n) mode */
    false,                       /* Enabled/disabled the channel (n+1) output */
    FTM_MAIN_DUPLICATED,
                       /* Select channel (n+1) output relative to channel (n) */
    false,                             /* Dead time enabled/disabled */
  },
};

/* PWM configuration for flexTimer_pwm0 */
ftm_pwm_param_t flexTimer_pwm0_PwmConfig = {
  2U,                                  /* Number of independent PWM channels */
  0U,                                  /* Number of combined PWM channels */
  FTM_MODE_EDGE_ALIGNED_PWM,           /* PWM mode */
  0U,                                  /* Dead time value */
  FTM_DEADTIME_DIVID_BY_1,             /* Dead time prescaler */
  20000U,                              /* PWM frequency */
  flexTimer_pwm0_IndependentChannelsConfig,
                          /* Independent PWM channels configuration structure */
  NULL,                      /* Combined PWM channels configuration structure */
  &flexTimer_pwm0_FaultConfig          /* PWM fault configuration structure */
};

/* Global configuration of flexTimer_pwm0 */
ftm_user_config_t flexTimer_pwm0_InitConfig = {
  {
    true,                              /* Software trigger state */
    false,                             /* Hardware trigger 1 state */
    false,                             /* Hardware trigger 2 state */
    false,                             /* Hardware trigger 3 state */
    true,                              /* Max loading point state */
    true,                              /* Min loading point state */
    FTM_SYSTEM_CLOCK,                  /* Update mode for INVCTRL register */
    FTM_SYSTEM_CLOCK,                  /* Update mode for SWOCTRL register */
    FTM_SYSTEM_CLOCK,                  /* Update mode for OUTMASK register */
    FTM_SYSTEM_CLOCK,                  /* Update mode for CNTIN register */
    true,                              /* Automatic clear of the trigger*/
    FTM_UPDATE_NOW,                    /* Synchronization point */
  },
  FTM_MODE_EDGE_ALIGNED_PWM,           /* Mode of operation for FTM */
  FTM_CLOCK_DIVID_BY_1,                /* FTM clock prescaler */
  FTM_CLOCK_SOURCE_SYSTEMCLK,          /* FTM clock source */
  FTM_BDM_MODE_00,                     /* FTM debug mode */
  false,                               /* Interrupt state */
  false                                /* Initialization trigger */
};

ftm_state_t ftmStateStruct0;
