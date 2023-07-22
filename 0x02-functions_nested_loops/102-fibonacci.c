#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, s = 1, t = 2, n;

	printf("%d, %d, ", s, t);
	for (i = 0; i < 48; i++)
	{
		n = s + t;
		printf("%d", n);
		s =  t;
		t =  n;
		if (i  < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
