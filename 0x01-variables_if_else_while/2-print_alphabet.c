#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char alph;
alph = 'a';
while (alph <= 'z')
{
putchar(alph);
alph++;
}
putchar('\n');
return (0);
}
