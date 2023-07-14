#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

        srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d " , n , n % 10);
if (n >= 6)
{
printf("and is greater than 5\n");
}
else if (n > 0 || n < 0)
{
printf("and is less than 6 and not 0\n");
}
else
printf("and is 0\n");
return (0);
}
