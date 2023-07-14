#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char alph;
alph = 'z';
while (alph >= 'a')
{
putchar(alph);
alph--;
}
putchar('\n');
return (0);
}
