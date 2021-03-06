/*
 * bl.h
 *
 *  Created on: 2017年10月10日
 *      Author: houxd
 */

#ifndef BL_H_
#define BL_H_
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


#define UART_RS485			(0)
#define UART_4G				(1)
#define UART_GPS			(2)

#include "LPUART.h"
#include "FlexCAN.h"
#include "SPI_MSD0_Driver.h"
#include "clocks_and_modes.h"
#include "ds3231.h"
#include "ds2411.h"

extern void WDOG_disable(void);
extern void NVIC_init_IRQs (void);
extern void PORT_init (void);
extern uint32_t get_tick_count();
extern void delay_ms(int ms);
extern void buzzer_ctrl(int en);
extern void buzzer_ctrl(int en);
extern void rs485_dir(int tx);
extern int get_input_val(int id);
extern void led_ctrl(int id, int v);


#ifdef __cplusplus
}
#endif

#endif /* BL_H_ */
