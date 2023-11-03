#include "hash_tables.h"
/**
 * hash_djb2 - Funcs that imprement djb2 algorithm
 * @str: string That generate hash value
 *
 * Return: value of hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int _hash;
	int a;

	_hash = 5381;
	while ((a = *str++))
	{
		_hash = ((_hash << 5) + _hash) + c;
	}
	return (_hash);
}
