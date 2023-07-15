#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
if (i < 7)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
