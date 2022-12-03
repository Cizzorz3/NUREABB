/*
 * modbus.c
 *
 *  Created on: Dec 3, 2022
 *      Author: Mohamed Adel
 */

#include "modbus.h"
nmbs_platform_conf platform_conf ;
/**================================================================
 * @Fn				- read_serial
 * @brief 			- reads the data from the serial
 * @param [in]      - *buf pointer to the buffer which will be read to
 * @param [in]      - count the number of bytes which will be read
 * @param [in]      - byte_timeout_ms the time till the bytes are read in
 * @param [in]      - *arg any args
 * @retval 			- int32_t
 * Note				- None
 */
int32_t read_serial(uint8_t* buf, uint16_t count, int32_t byte_timeout_ms,void* arg)
{

		return 0;
}
/**================================================================
 * @Fn				- write_serial
 * @brief 			- writes the data to the serial
 * @param [in]      - *buf pointer to the buffer which will be wrote to
 * @param [in]      - count the number of bytes which will be wrote
 * @param [in]      - byte_timeout_ms the time till the bytes are read in
 * @param [in]      - *arg any args
 * @retval 			- int32_t
 * Note				- None
 */
int32_t write_serial(const uint8_t* buf, uint16_t count, int32_t byte_timeout_ms,void* arg)
{
		return 0;
}
void onError(void)
{
	asm("NOP");

}

/**================================================================
 * @Fn				- start_modbus
 * @brief 			- this function starts the modus operation
 * @param [in]      - None
 * @retval 			- None
 * Note				- None
 */
void start_modbus(void)
{
	platform_conf.transport = NMBS_TRANSPORT_RTU;
	platform_conf.read = read_serial;
	platform_conf.write = write_serial;
	nmbs_t nmbs;
	nmbs_error err = nmbs_client_create(&nmbs, &platform_conf);
	  if (err != NMBS_ERROR_NONE)
	    onError();

	  nmbs_set_read_timeout(&nmbs, 1000);
	  nmbs_set_byte_timeout(&nmbs, 100);

	  nmbs_set_destination_rtu_address(&nmbs, RTU_SERVER_ADDRESS);

	  // Write 2 coils from address 64
	  nmbs_bitfield coils;
	  nmbs_bitfield_write(coils, 0, 1);
	  nmbs_bitfield_write(coils, 1, 1);
	  err = nmbs_write_multiple_coils(&nmbs, 64, 2, coils);
	  if (err != NMBS_ERROR_NONE)
	    onError();

	  // Read 3 coils from address 64
	  nmbs_bitfield_reset(coils);    // Reset whole bitfield to zero
	  err = nmbs_read_coils(&nmbs, 64, 3, coils);
	  if (err != NMBS_ERROR_NONE)
	    onError();

	  // Write 2 holding registers at address 26
	  uint16_t w_regs[2] = {123, 124};
	  err = nmbs_write_multiple_registers(&nmbs, 26, 2, w_regs);
	  if (err != NMBS_ERROR_NONE)
	    onError();

	  // Read 2 holding registers from address 26
	  uint16_t r_regs[2];
	  err = nmbs_read_holding_registers(&nmbs, 26, 2, r_regs);
	  if (err != NMBS_ERROR_NONE)
	    onError();
}

