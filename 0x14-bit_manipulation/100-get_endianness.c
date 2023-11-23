#include "main.h"
/**
 *get_endianness - this function checks for endianness
 *Return: 0 for big endian and 1 for little endian
 */

int get_endianness(void)

{
	unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);
	else
		return (0);
}
