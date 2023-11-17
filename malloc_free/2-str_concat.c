#include <stdlib.h>
#include <stdlib.h>
/**
* *str_concat - concatenates two strings.
* @s1: pointer to string 1 for copy into concat
* @s2: pointer to string 2 for add to concat after s1 copy
*
* Description: returned pointer should point to a newly allocated space
* in memory which contains the contents of s1 followed by the
* contents of s2, and null terminated.
* Return: On success 1.
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int len_s1 = 0, len_s2 = 0, a = 0, b = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	for (; s1[len_s1] != '\0'; len_s1++)
	for (; s2[len_s2] != '\0'; len_s2++)
	concat = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (; a < len_s1; a++)
	{
		concat[a] = s1[a];
	}
	for (; b < len_s2; b++)
	{
		concat[a] = s2[b];
		a++;
	}
	concat[a] = '\0';
	return (concat);
}
