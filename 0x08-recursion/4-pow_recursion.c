#include "main.h"
/**
 * main - Checks the code
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to multiply
 * @y: multiplier
 * Return: the product
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
