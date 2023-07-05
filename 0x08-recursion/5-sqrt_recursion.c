#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion(n, 1));
}
/**
 * _sqrt - Culculates natural square root
 * @n: number to culculate sqrt
 * @i: iterate int
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i +1));
}
