#include "main.h"
#include <stdio.h>
int check_prime(int n, int i);
/**
 * is_prime_number - Prints a number if its prime
 * @n: the number
 * Return: prime number(integer)
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Checks if no is a prime no
 * @n: the number
 * @i: iteration times
 * Return: either 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
