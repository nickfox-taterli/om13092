#include "fsl_common.h"
#include "fsl_iocon.h"
#include "pin_mux.h"

void BOARD_InitPins(void)
{
    /* Enables the clock for the IOCON block. 0 = Disable; 1 = Enable.: 0x01u */
    CLOCK_EnableClock(kCLOCK_Iocon);

    const uint32_t port0_pin23_config = (/* Pin is configured as SPIFI_CSN */
                                         IOCON_PIO_FUNC6 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN23 (coords: N7) is configured as SPIFI_CSN */
    IOCON_PinMuxSet(IOCON, 0U, 23U, port0_pin23_config);

    const uint32_t port0_pin24_config = (/* Pin is configured as SPIFI_IO(0) */
                                         IOCON_PIO_FUNC6 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN24 (coords: M7) is configured as SPIFI_IO(0) */
    IOCON_PinMuxSet(IOCON, 0U, 24U, port0_pin24_config);

    const uint32_t port0_pin25_config = (/* Pin is configured as SPIFI_IO(1) */
                                         IOCON_PIO_FUNC6 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN25 (coords: K8) is configured as SPIFI_IO(1) */
    IOCON_PinMuxSet(IOCON, 0U, 25U, port0_pin25_config);

    const uint32_t port0_pin26_config = (/* Pin is configured as SPIFI_CLK */
                                         IOCON_PIO_FUNC6 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN26 (coords: M13) is configured as SPIFI_CLK */
    IOCON_PinMuxSet(IOCON, 0U, 26U, port0_pin26_config);

    const uint32_t port0_pin27_config = (/* Pin is configured as SPIFI_IO(3) */
                                         IOCON_PIO_FUNC6 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN27 (coords: L9) is configured as SPIFI_IO(3) */
    IOCON_PinMuxSet(IOCON, 0U, 27U, port0_pin27_config);

    const uint32_t port0_pin28_config = (/* Pin is configured as SPIFI_IO(2) */
                                         IOCON_PIO_FUNC6 |
                                         /* Selects pull-up function */
                                         IOCON_PIO_MODE_PULLUP |
                                         /* Input function is not inverted */
                                         IOCON_PIO_INV_DI |
                                         /* Enables digital function */
                                         IOCON_PIO_DIGITAL_EN |
                                         /* Input filter disabled */
                                         IOCON_PIO_INPFILT_OFF |
                                         /* Standard mode, output slew rate control is enabled */
                                         IOCON_PIO_SLEW_STANDARD |
                                         /* Open drain is disabled */
                                         IOCON_PIO_OPENDRAIN_DI);
    /* PORT0 PIN28 (coords: M9) is configured as SPIFI_IO(2) */
    IOCON_PinMuxSet(IOCON, 0U, 28U, port0_pin28_config);
}
