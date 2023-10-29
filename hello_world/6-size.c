#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Anything (Success)
 */
int main(void)
{
printf("The size of int is %zu bytes\n", sizeof(int));
printf("The size of char is %zu byte\n", sizeof(char));
printf("The size of float is %zu bytes\n", sizeof(float));
printf("The size of long is %zu bytes\n", sizeof(long int));
printf("The size of long long is %zu bytes\n", sizeof(long long));
return (0);
}
