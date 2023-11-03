#include "hash_tables.h"

/**
 * shash_table_create - Function that creates a hash table
 * Description: Function that creates a hash table
 * @size: The size of the array
 * Return: Return NULL or Hash Table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *_nw_tble;
	unsigned long int _index;

	_nw_tble = (shash_table_t *) malloc(sizeof(shash_table_t));
	if (_nw_tble == NULL)
		return (NULL);
	_nw_tble->size = size;
	_nw_tble->shead = NULL;
	_nw_tble->stail = NULL;
	_nw_tble->array = (shash_node_t **) malloc(sizeof(shash_node_t *) * size);
	if (_nw_tble->array == NULL)
	{
		free(_nw_tble);
		return (NULL);
	}
	for (_index = 0; _index < size; _index++)
		(_nw_tble->array)[_index] = NULL;
	return (_nw_tble);
}

/**
 * shash_sorted_list_update - update
 *
 * @ht: sorted
 * @new_node: node
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */
int shash_sorted_list_update(shash_table_t **ht, shash_node_t **new_node,
		const char *key, const char *value)
{
	shash_node_t *old_head = NULL;

	old_head = (*ht)->shead;
	while (old_head)
	{
		if (strcmp(old_head->key, key) == 0)
		{
			free(old_head->value);
			old_head->value = (char *) strdup(value);
			free((*new_node)->key);
			free((*new_node)->value);
			free((*new_node));
			return (1);
		}
		old_head = old_head->snext;
	}
	return (0);
}

/**
 * shash_sorted_list_insert - insert
 *
 * @ht: sorted
 * @new_node: node
 * @key: key
 *
 * Return: 1 or 0
 */
int shash_sorted_list_insert(shash_table_t **ht, shash_node_t **new_node,
		const char *key)
{
	shash_node_t *_old_hd = NULL;

	_old_hd = (*ht)->shead;
	while (_old_hd)
	{
		if (strcmp(_old_hd->key, key) > 0)
		{
			(*new_node)->snext = _old_hd;
			(*new_node)->sprev = _old_hd->sprev;
			if (_old_hd->sprev != NULL)
				_old_hd->sprev->snext = *new_node;
			else
				(*ht)->shead = *new_node;
			_old_hd->sprev = *new_node;
			return (1);
		}
		_old_hd = _old_hd->snext;
	}
	(*new_node)->sprev = (*ht)->stail;
	(*ht)->stail->snext = *new_node;
	(*ht)->stail = *new_node;
	return (1);
}

/**
 * shash_insert_into_sorted_list - inserts into sorted list
 *
 * @ht: Sorted hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success 0 if failure
 */
int shash_insert_into_sorted_list(shash_table_t *ht, const char *key,
		const char *value)
{
	shash_node_t *_nw_nd = NULL;

	_nw_nd = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (_nw_nd == NULL)
		return (0);
	_nw_nd->key = (char *) strdup(key);
	_nw_nd->value = (char *) strdup(value);
	_nw_nd->next = _nw_nd->snext = _nw_nd->sprev = NULL;
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = _nw_nd;
		ht->stail = _nw_nd;
		return (1);
	}
	else
	{
		if (!shash_sorted_list_update(&ht, &_nw_nd, key, value))
			return (shash_sorted_list_insert(&ht, &_nw_nd, key));
		else
			return (1);
	}
}

/**
 * shash_insert_into_array - inserts into array
 *
 * Description: inserts into buckets
 *
 * @ht: Sorted hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success 0 if failure
 */
int shash_insert_into_array(shash_table_t *ht, const char *key,
		const char *value)
{
	unsigned long int index = 0;
	shash_node_t *_nw_nd = NULL, *_old_hd = NULL;

	_nw_nd = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (_nw_nd == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	_nw_nd->key = (char *) strdup(key);
	_nw_nd->value = (char *) strdup(value);
	_nw_nd->next = _nw_nd->snext = _nw_nd->sprev = NULL;

	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = _nw_nd;
		return (1);
	}
	else
	{
		_old_hd = (ht->array)[index];
		while (_old_hd)
		{
			if (strcmp(_old_hd->key, key) == 0)
			{
				free(_old_hd->value);
				_old_hd->value = (char *) strdup(value);
				free(_nw_nd->key);
				free(_nw_nd->value);
				free(_nw_nd);
				return (1);
			}
			_old_hd = _old_hd->next;
		}
		_old_hd = (ht->array)[index];
		_nw_nd->next = _old_hd;
		(ht->array)[index] = _nw_nd;
		return (1);
	}
}

/**
 * shash_table_set - short description
 *
 * Description: long description
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: return description
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	if (!shash_insert_into_array(ht, key, value))
		return (0);
	return (shash_insert_into_sorted_list(ht, key, value));
}

/**
 * shash_table_get - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 * @key: argument_2 description
 *
 * Return: return description
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *_curr_node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);
	_curr_node = (ht->array)[index];
	while (_curr_node)
	{
		if (strcmp(_curr_node->key, key) == 0)
			return (_curr_node->value);
		_curr_node = _curr_node->next;
	}
	return (NULL);
}


/**
 * shash_table_print - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *_curr_node;
	int is_first_hash;

	if (ht == NULL)
		return;
	printf("{");
	is_first_hash = 1;
	_curr_node = ht->shead;
	while (_curr_node)
	{
		if (!is_first_hash)
			printf(", ");
		is_first_hash = 0;
		printf("\'%s\': \'%s\'", _curr_node->key,
				_curr_node->value);
		_curr_node = _curr_node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *_curr_node;
	int is_first_hash;

	if (ht == NULL)
		return;
	printf("{");
	is_first_hash = 1;
	_curr_node = ht->stail;
	while (_curr_node)
	{
		if (!is_first_hash)
			printf(", ");
		is_first_hash = 0;
		printf("\'%s\': \'%s\'", _curr_node->key,
				_curr_node->value);
		_curr_node = _curr_node->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete_arr - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void shash_table_delete_arr(shash_table_t *ht)
{
	shash_node_t *_curr_node, *_prev_node;
	unsigned long int array_index, has_nodes;

	for (array_index = 0; array_index < ht->size; array_index++)
	{
		has_nodes = 0;
		_curr_node = (ht->array)[array_index];
		while (_curr_node)
		{
			has_nodes = 1;
			_prev_node = _curr_node;
			_curr_node = _curr_node->next;
			free(_prev_node->key);
			free(_prev_node->value);
			free(_prev_node);
		}
		if (!has_nodes)
			free((ht->array)[array_index]);
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_table_delete_slist - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void shash_table_delete_slist(const shash_table_t *ht)
{
	shash_node_t *_curr_node, *_prev_node;

	if (ht == NULL)
		return;
	_curr_node = ht->shead;
	_prev_node = NULL;
	while (_curr_node)
	{
		_prev_node = _curr_node;
		_curr_node = _curr_node->snext;
		free(_prev_node->key);
		free(_prev_node->value);
		free(_prev_node);
	}
}

/**
 * shash_table_delete - short description
 *
 * Description: long description
 *
 * @ht: argument_1 description
 *
 * Return: return description
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_delete_slist(ht);
	shash_table_delete_arr(ht);
}
