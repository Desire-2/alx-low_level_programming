#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 *                           a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if anything fails or the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *update_node, *node_x;
	unsigned int index;

	node_x = *head;

	update_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || update_node == NULL)
		return (NULL);

	update_node->n = n;

	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		node_x = node_x->next;
		if (node_x == NULL)
			return (NULL);
	}

	if (idx == 0)
	{
		update_node->next = *head;
		*head = update_node;
	}
	else if (node_x->next)
	{
		update_node->next = node_x->next;
		node_x->next = update_node;
	}
	else
	{
		update_node->next = NULL;
		node_x->next = update_node;
	}

	return (update_node);
}
