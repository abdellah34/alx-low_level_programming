#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar(alph);
}
for (alph = 'A'; alph <= 'Z'; alph++)
{
putchar(alph);
}
putchar('\n');
return (0);
}
