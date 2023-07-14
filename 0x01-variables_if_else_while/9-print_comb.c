#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
putchar('0' +  n);
if (n < 9)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
