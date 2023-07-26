#include "main.h"
/**
* reverse_array - reverses the content oh an array of integer
* @a: an  integer pointer
* @n: is the number of elements of the array
* Doses retun anything
*/
void reverse_array(int *a, int n)
{
	int p, i;
	for (i = 0; i < n / 2; i++)
	{
		p = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = p;
	}
}
