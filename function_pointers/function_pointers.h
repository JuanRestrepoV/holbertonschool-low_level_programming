#ifndef POINTER_FUNCTION
#define POINTER_FUNCTION
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
