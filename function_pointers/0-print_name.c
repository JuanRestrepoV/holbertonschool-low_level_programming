#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_name - Typedef for struct.
* @name: name parameter to print
* @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
