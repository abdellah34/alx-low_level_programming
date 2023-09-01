#include "main.h"

/**
 * get_endianness - check the endianess.
 *
 * Return: 0 if big endian, 1 if litle endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((*byte == 1) ? 1 : 0);
}
