#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
       long long int s = 1, t = 2, n;

	printf("%lld, %lld, ", s, t);
	for (i = 0; i < 48; i++)
	{
		n = s + t;
		printf("%lld", n);
		s =  t;
		t =  n;
		if (i  < 47)
			printf(", ");
	}
	printf("\n");
	return (0);
}
