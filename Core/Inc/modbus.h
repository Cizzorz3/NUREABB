/*
 * modbus.h
 *
 *  Created on: Dec 3, 2022
 *      Author: mohamed
 */

#ifndef INC_MODBUS_H_
#define INC_MODBUS_H_
#include "common_includes.h"
#include "nanomodbus.h"

#define RTU_SERVER_ADDRESS 1
int32_t read_serial(uint8_t* buf, uint16_t count, int32_t byte_timeout_ms,void* arg);
int32_t write_serial(const uint8_t* buf, uint16_t count, int32_t byte_timeout_ms,void* arg);


#endif /* INC_MODBUS_H_ */
