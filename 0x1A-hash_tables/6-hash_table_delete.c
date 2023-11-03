#include "hash_tables.h"
/**
* hash_table_delete - Function that deletes a hash table.
* @ht: hash table to delete
*
* Description: Function to delete a hash table.
* Return: 0 (Success)
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *_move_Node, *_temp;
	unsigned long int _index;

	if (ht == NULL)
		return;

	for (_index = 0; _index < (ht->size); _index++)
	{
		_move_Node = ht->array[_index];
		while (_move_Node != NULL)
		{
			_temp = _move_Node->next;
			if (_move_Node->key != NULL)
				free(_move_Node->key);
			if (_move_Node->value != NULL)
				free(_move_Node->value);
			if (_move_Node != NULL)
				free(_move_Node);
			_move_Node = _temp;
		}
	}
	free(ht->array);
	free(ht);
}
