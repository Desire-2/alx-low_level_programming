#include "hash_tables.h"
/**
* hash_table_print - function that prints a hash table.
* @ht: Hash table to be print
*
* Description: Function to print a hash table
* Return: Nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *_move_Node;
	unsigned long int _index;
	int r = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (_index = 0; _index < (ht->size); _index++)
	{
		_move_Node = ht->array[_index];
		while (_move_Node != NULL)
		{
			if (r > 0)
				printf(", ");

			printf("\'%s\': \'%s\'", (_move_Node->key), (_move_Node->value));
			_move_Node = _move_Node->next;
			r++;
		}
	}
	printf("}\n");
}
