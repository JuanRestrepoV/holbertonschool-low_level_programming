#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @str: the input string
*
* Description: changes all lowercase letters of a string to uppercase.
* Return: modified string.
*/
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
		*ptr = *ptr - 'a' + 'A';
		}
		ptr++;
	}
	return (str);
}
