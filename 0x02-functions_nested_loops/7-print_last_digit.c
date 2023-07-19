#include "main.h"
/**
*print_last_digit - prints the last digit of a number
*@n: The int to print its digit
*Return: 1 if n is greater than 0
* 0 if n is zero
* -1 x  n otherwise
*/
int print_last_digit(int n)
{
if (n >= 0)
{
_putchar(n % 10);
return (n % 10);
}
else
{
_putchar((-1) * n % 10);
return ((-1) * n % 10);
}
}