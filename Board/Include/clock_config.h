#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

#define BOARD_XTAL0_CLK_HZ 12000000U /*!< Board xtal0 frequency in Hz */
#define BOARD_XTAL32K_CLK_HZ 32768U  /*!< Board xtal32K frequency in Hz */

#define BOARD_BOOTCLOCKPLL180M_CORE_CLOCK 180000000U /*!< Core clock frequency:180000000Hz */

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockPLL180M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */
