#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum3 = 0, sum5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum3 = sum3 + i;
		}
		else if (i % 5 == 0)
		{
			sum5 = sum5 + i;
		}
	}
	printf("%d\n", sum3 + sum5);
	return (0);
}
