#include "main.h"

/**
 * _sqrt_recur - Makes possible to evaluate from 1 to n
 * @n: number
 * @x: number
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _sqrt_recur(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recur(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 0));
}
