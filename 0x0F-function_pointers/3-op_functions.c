#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two numbers.
 * @a: the first integer .
 * @b: the second integer.
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers.
 * @a: the first integer .
 * @b: the second integer.
 * Return: the difference  of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicate two numbers.
 * @a: the first integer .
 * @b: the second integer.
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers.
 * @a: the first integer .
 * @b: the second integer.
 * Return: the quotient of the division  of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divide two numbers.
 * @a: the first integer .
 * @b: the second integer.
 * Return: the remainder of the division  of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
