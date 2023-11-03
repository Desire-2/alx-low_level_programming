#include "hash_tables.h"
/**
* hash_table_set - function that adds an element to the hash table.
* @ht: Table to add/update key/value to
* @key: key. Cannot be empty string
* @value: value associated with key
*
* Description: function to add an element to a hash table.
* Return: 1 Success, 0 Fail
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *_nw_Node, *_temp_Node;
	unsigned long int _index;

	if (ht == NULL)
		return (0);
	_index = (hash_djb2((const unsigned char *)key) % (ht->size));
	if (key == NULL || value == NULL || (strcmp(key, "") == 0))
		return (0);
	if (ht->array[_index] == NULL)
	{_nw_Node = malloc(sizeof(hash_node_t));
		if (_nw_Node == NULL)
			return (0);
		ht->array[_index] = _nw_Node;
		_nw_Node->key = (strdup(key));
		_nw_Node->value = (strdup(value));
		_nw_Node->next = NULL;
		return (1);
	}
	_temp_Node = ht->array[_index];
	while (_temp_Node)
	{
		if (strcmp(key, _temp_Node->key) == 0)
		{free(_temp_Node->value);
			_temp_Node->value = (strdup(value));
			return (1);
		}
		_temp_Node = _temp_Node->next;
	}
	_temp_Node = ht->array[_index];
	while (_temp_Node)
	{_nw_Node = malloc(sizeof(hash_node_t));
		if (_nw_Node == NULL)
			return (0);
		ht->array[_index] = _nw_Node;
		_nw_Node->key = (strdup(key));
		_nw_Node->value = (strdup(value));
		_nw_Node->next = _temp_Node, ht->array[_index] = _nw_Node;
		return (1);
	}
	return (0);
}
