#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and als Prints passwords for the crackme5
 * @argc: The number of Arguments Supplied to the Program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codex;
	int len = strlen(argv[1]), r, _tmp;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	_tmp = (len ^ 59) & 63;
	password[0] = codex[tmp];

	_tmp = 0;
	for (r = 0; r < len; r++)
		_tmp += argv[1][r];
	password[1] = codex[(_tmp ^ 79) & 63];

	_tmp = 1;
	for (r = 0; r < len; r++)
		_tmp *= argv[1][r];
	password[2] = codex[(_tmp ^ 85) & 63];

	_tmp = 0;
	for (r = 0; r < len; r++)
	{
		if (argv[1][r] > _tmp)
			_tmp = argv[1][r];
	}
	srand(_tmp ^ 14);
	password[3] = codex[rand() & 63];

	_tmp = 0;
	for (r = 0; r < len; r++)
		_tmp += (argv[1][r] * argv[1][r]);
	password[4] = codex[(_tmp ^ 239) & 63];

	for (r = 0; r < argv[1][0]; r++)
		_tmp = rand();
	password[5] = codex[(_tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
