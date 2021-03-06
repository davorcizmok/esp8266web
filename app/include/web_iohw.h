/*
 * web_iohw.h
 *
 */

#ifndef _WEB_IOHW_H_
#define _WEB_IOHW_H_

#include "user_config.h"

void set_cpu_clk(void) ICACHE_FLASH_ATTR; // select cpu frequency 80 or 160 MHz
void set_gpiox_mux_pull(uint8 pin_num, uint8 pull) ICACHE_FLASH_ATTR;
void set_gpiox_mux_func(uint8 pin_num, uint8 func) ICACHE_FLASH_ATTR;
uint32 get_gpiox_mux_func(uint8 pin_num) ICACHE_FLASH_ATTR;
void set_gpiox_mux_func_ioport(uint8 pin_num) ICACHE_FLASH_ATTR;
void set_gpiox_mux_func_default(uint8 pin_num) ICACHE_FLASH_ATTR;
volatile uint32 * get_addr_gpiox_mux(uint8 pin_num) ICACHE_FLASH_ATTR;
uint32 get_gpiox_mux(uint8 pin_num) ICACHE_FLASH_ATTR;

void test_pin_clr_wifi_config(void) ICACHE_FLASH_ATTR;
extern uint64 get_mac_time(void) ICACHE_FLASH_ATTR;
#define get_tsf_ap() get_mac_time()
extern uint32 get_tsf_station(void) ICACHE_FLASH_ATTR;
extern volatile uint32 recv_tsf; // принятый TSF от внешней AP
extern volatile uint32 recv_tsf_time;	// время приема TSF (младшие 32 бита - считем, что для времязависимых приложений не ставят время следования beacon более 4294967296 us :) )

extern sint32 delta_mac;

#endif /* _WEB_IOHW_H_ */
