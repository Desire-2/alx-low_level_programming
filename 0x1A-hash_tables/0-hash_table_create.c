#include "hash_tables.h"
/**
* hash_table_create - Function that create hash table
* @size: Hash table array size
*
* Description: Creates a hash table.
* Return: Ptr to new table, or NULL if fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *_nw_tble;
	unsigned long int _index;

	if (size <= 0)
		return (NULL);

	_nw_tble = malloc(sizeof(hash_table_t));
	if (_nw_tble == NULL)
		return (NULL);
	_nw_tble->array = malloc(sizeof(hash_node_t *) * size);
	if (_nw_tble->array == NULL)
		return (NULL);
	_nw_tble->size = size;
	for (_index = 0; _index < size; _index++)
		_nw_tble->array[_index] = NULL;
	return (_nw_tble);
}
