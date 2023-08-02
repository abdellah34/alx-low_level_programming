#include "main.h"
#include <stdio.h>
/**
* set_string - sets the value of pointer of a char
* @s: is a double pointer
* @to: is a pointer
* Does returns anything
*/
void set_string(char **s, char *to)
{
	*s = to;
}
