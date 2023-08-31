#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to search
 * @index: index to return
 * Return: the value of the bit at index or -1 incase error occurs
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}
