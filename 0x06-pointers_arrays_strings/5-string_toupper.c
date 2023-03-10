#include "main.h"

/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char
 * Written by desire
 * Return: @s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;/*The ASCII codes for a-z are 97-122*/
					   /*The ASCII codes for A-Z are 65-90.*/
		i++;
	}
	return (s);
}
