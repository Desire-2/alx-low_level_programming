#include "hash_tables.h"
/**
* hash_table_get - Function  that retrieves a value associated with a key.
* @ht: table to search
* @key: key to retrieve
*
* Description: function to get value from a passed key.
* Return: Value of key or NULL if fail
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *_temp_Node;
	unsigned long int _index;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || (strcmp(key, "") == 0))
		return (NULL);
	_index = (hash_djb2((const unsigned char *)key) % (ht->size));
	_temp_Node = ht->array[_index];

	while (_temp_Node)
	{
		if (strcmp(key, _temp_Node->key) == 0)
		{
			return (_temp_Node->value);
		}
		_temp_Node = _temp_Node->next;
	}
	return (NULL);
}
