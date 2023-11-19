#include "main.h"
/**
* cap_string - capitalizes all words of a string
* @str: the input string
*
* Return: a pointer to the modified string
*/
char *cap_string(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		if ((b == 0 && str[b] >= 'a' && str[b] <= 'z'))
		{
			str[b] = str[b] - 'a' + 'A';
		}
		else if (str[b] == ' ' || str[b] == '\t' || str[b] == '\n' || str[b] == ','
			|| str[b] == ';' || str[b] == '.' || str[b] == '!' || str[b] == '?' ||
			str[b] == '"' || str[b] == '(' || str[b] == ')' || str[b] == '{'
			|| str[b] == '}')
		{
			if ((str[b + 1] >= 'a' && str[b + 1] <= 'z'))
			{
				str[b + 1] = str[b + 1] - 32;
			}
		}
		b++;
	}
	return (str);
}
