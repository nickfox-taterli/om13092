#ifndef _BOARD_H_
#define _BOARD_H_

#include "clock_config.h"
#include "fsl_common.h"

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

void BOARD_InitSDRAM(void);
void BOARD_InitSPIFI(void);
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* _BOARD_H_ */
