#ifndef RENAULT_ZOE_GEN2_BATTERY_H
#define RENAULT_ZOE_GEN2_BATTERY_H
#include "../include.h"

#define BATTERY_SELECTED
#define MAX_PACK_VOLTAGE_DV 4100  //5000 = 500.0V
#define MIN_PACK_VOLTAGE_DV 3000
#define MAX_CELL_DEVIATION_MV 150
#define MAX_CELL_VOLTAGE_MV 4250  //Battery is put into emergency stop if one cell goes over this value
#define MIN_CELL_VOLTAGE_MV 2700  //Battery is put into emergency stop if one cell goes below this value

void setup_battery(void);
void transmit_can_frame(CAN_frame* tx_frame, int interface);

/**
 * @brief Transmit CAN frame 0x376
 * 
 * @param[in] void
 * 
 * @return void
 * 
 */
void transmit_can_frame_376(void);

/**
 * @brief Reset NVROL, by sending specific frames
 *
 * @param[in] void
 *
 * @return void
 */
void transmit_reset_nvrol_frames(void);

/**
 * @brief Wait function
 *
 * @param[in] duration_ms wait duration in ms
 *
 * @return void
 */
void wait_ms(int duration_ms);

#define POLL_SOC 0x9001
#define POLL_USABLE_SOC 0x9002
#define POLL_SOH 0x9003
#define POLL_PACK_VOLTAGE 0x9005
#define POLL_MAX_CELL_VOLTAGE 0x9007
#define POLL_MIN_CELL_VOLTAGE 0x9009
#define POLL_12V 0x9011
#define POLL_AVG_TEMP 0x9012
#define POLL_MIN_TEMP 0x9013
#define POLL_MAX_TEMP 0x9014
#define POLL_MAX_POWER 0x9018
#define POLL_INTERLOCK 0x901A
#define POLL_KWH 0x91C8
#define POLL_CURRENT 0x925D
#define POLL_CURRENT_OFFSET 0x900C
#define POLL_MAX_GENERATED 0x900E
#define POLL_MAX_AVAILABLE 0x900F
#define POLL_CURRENT_VOLTAGE 0x9130
#define POLL_CHARGING_STATUS 0x9019
#define POLL_REMAINING_CHARGE 0xF45B
#define POLL_BALANCE_CAPACITY_TOTAL 0x924F
#define POLL_BALANCE_TIME_TOTAL 0x9250
#define POLL_BALANCE_CAPACITY_SLEEP 0x9251
#define POLL_BALANCE_TIME_SLEEP 0x9252
#define POLL_BALANCE_CAPACITY_WAKE 0x9262
#define POLL_BALANCE_TIME_WAKE 0x9263
#define POLL_BMS_STATE 0x9259
#define POLL_BALANCE_SWITCHES 0x912B
#define POLL_ENERGY_COMPLETE 0x9210
#define POLL_ENERGY_PARTIAL 0x9215
#define POLL_SLAVE_FAILURES 0x9129
#define POLL_MILEAGE 0x91CF
#define POLL_FAN_SPEED 0x912E
#define POLL_FAN_PERIOD 0x91F4
#define POLL_FAN_CONTROL 0x91C9
#define POLL_FAN_DUTY 0x91F5
#define POLL_TEMPORISATION 0x9281
#define POLL_TIME 0x9261
#define POLL_PACK_TIME 0x91C1
#define POLL_SOC_MIN 0x91B9
#define POLL_SOC_MAX 0x91BA

#endif
