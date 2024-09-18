/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7 
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 3.0.0
*   Build Version        : S32K3_AUTOSAR_4_4_-_R21-11_RTD_3_0_0_D2303_ASR_REL_4_7_REV_0000_20230331
*
*   Copyright 2020 - 2023 NXP Semiconductors
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file      Siul2_Port_Ip_Cfg.h
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Siul2_Port_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SIUL2_PORT_IP_VENDOR_ID_CFG_C                       43
#define SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C        4
#define SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C        7
#define SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C     0
#define SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_C                3
#define SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_C                0
#define SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_C                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are of the same vendor */
#if (SIUL2_PORT_IP_VENDOR_ID_CFG_C != SIUL2_PORT_IP_VENDOR_ID_CFG_H)
    #error "Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h have different vendor ids"
#endif
/* Check if Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are of the same Autosar version */
#if ((SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C    != SIUL2_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C    != SIUL2_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C != SIUL2_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H) \
    )
    #error "AutoSar Version Numbers of Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are different"
#endif
/* Check if Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are of the same Software version */
#if ((SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_C != SIUL2_PORT_IP_SW_MAJOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_C != SIUL2_PORT_IP_SW_MINOR_VERSION_CFG_H) || \
    (SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_C != SIUL2_PORT_IP_SW_PATCH_VERSION_CFG_H)    \
    )
    #error "Software Version Numbers of Siul2_Port_Ip_Cfg.c and Siul2_Port_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                             LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                             LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                            LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL VARIABLES
==================================================================================================*/

/* clang-format off */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: M7_0}
- pin_list:
  - {pin_num: F3, peripheral: FXIO, signal: fxio_d0, pin_signal: PTD0, direction: OUTPUT}
  - {pin_num: E3, peripheral: FXIO, signal: fxio_d1, pin_signal: PTD1, direction: INPUT}
  - {pin_num: F17, peripheral: LPUART3, signal: lpuart3_rx, pin_signal: PTD3}
  - {pin_num: F16, peripheral: LPUART3, signal: lpuart3_tx, pin_signal: PTD2, direction: OUTPUT}
  - {pin_num: A13, peripheral: LPUART0, signal: lpuart0_cts, pin_signal: PTA0}
  - {pin_num: B14, peripheral: LPUART0, signal: lpuart0_rts, pin_signal: PTA1}
  - {pin_num: D17, peripheral: LPUART0, signal: lpuart0_rx, pin_signal: PTA2}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#define PORT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*! @brief Array of pin configuration structures */
const Siul2_Port_Ip_PinSettingsConfig g_pin_mux_InitConfigArr0[NUM_OF_CONFIGURED_PINS0] =
{
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 96u,
        .mux                         = PORT_MUX_ALT6,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 97u,
        .mux                         = PORT_MUX_AS_GPIO,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .inputMuxReg                 = {
                                         153u
                                       },
        .inputMux                    = { 
                                         PORT_INPUT_MUX_ALT1,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT
                                       },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 99u,
        .mux                         = PORT_MUX_AS_GPIO,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .inputMuxReg                 = {
                                         190u
                                       },
        .inputMux                    = { 
                                         PORT_INPUT_MUX_ALT3,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT
                                       },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 98u,
        .mux                         = PORT_MUX_ALT6,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 0u,
        .mux                         = PORT_MUX_AS_GPIO,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .inputMuxReg                 = {
                                         360u
                                       },
        .inputMux                    = { 
                                         PORT_INPUT_MUX_ALT1,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT
                                       },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 1u,
        .mux                         = PORT_MUX_ALT3,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_DISABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_ENABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .initValue                   = 2u
    },
    {
        .base                        = IP_SIUL2,
        .pinPortIdx                  = 2u,
        .mux                         = PORT_MUX_AS_GPIO,
        .safeMode                    = PORT_SAFE_MODE_DISABLED,
        .inputFilter                 = PORT_INPUT_FILTER_NOT_AVAILABLE,
        .pullConfig                  = PORT_INTERNAL_PULL_NOT_ENABLED,
        .pullKeep                    = PORT_PULL_KEEP_DISABLED,
        .invert                      = PORT_INVERT_DISABLED,
        .inputBuffer                 = PORT_INPUT_BUFFER_ENABLED,
        .outputBuffer                = PORT_OUTPUT_BUFFER_DISABLED,
        .adcInterleaves              = { MUX_MODE_NOT_AVAILABLE, MUX_MODE_NOT_AVAILABLE },
        .inputMuxReg                 = {
                                         187u
                                       },
        .inputMux                    = { 
                                         PORT_INPUT_MUX_ALT1,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT,
                                         PORT_INPUT_MUX_NO_INIT
                                       },
        .initValue                   = 2u
    },
};

#define PORT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Port_MemMap.h"

/*==================================================================================================
                                      LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

