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
    printf("The size of double is %zu bytes\n", sizeof(double));
    printf("The size of long is %zu bytes\n", sizeof(long));
    printf("The size of long long is %zu bytes\n", sizeof(long long));
    printf("The size of short is %zu bytes\n", sizeof(short));
    printf("The size of unsigned int is %zu bytes\n", sizeof(unsigned int));
    printf("The size of unsigned long is %zu bytes\n", sizeof(unsigned long));
    printf("The size of unsigned long long is %zu bytes\n", sizeof(unsigned long long));
    printf("The size of unsigned short is %zu bytes\n", sizeof(unsigned short));

    return 0;
}
