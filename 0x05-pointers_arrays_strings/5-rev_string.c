/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 * Written by Desire
 * Return: Nothing
*/

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*1st lets find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*Then swap the string by looping to half the string*/
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		s[i] = s[l - 1 - i]; /*We us -1 because the array starts from 0*/
		s[l - 1 - i] = ch;
	}

}
