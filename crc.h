#ifndef CRC_CCITT_H_
#define CRC_CCITT_H_

#include <stdio.h>
#include <stdint.h>

uint16_t crc16_ccitt(uint8_t *data_p, uint8_t length);
uint32_t crc32(uint32_t previousCrc32, const void* data, size_t length);

#endif /* CRC_CCITT_H_ */
