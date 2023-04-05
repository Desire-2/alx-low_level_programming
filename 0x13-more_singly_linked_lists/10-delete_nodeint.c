#include "lists.h"
#include "stdlib.h"

/**
 * delete_nodeint_at_index - Delete the node at given position
 * @head: Adress of first node.
 * @index: Position of node to delete.
 * Return: If success (1), if fail (-1).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *next, *temp;
	unsigned int r;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		next = temp->next;
		free(temp);
		temp = next;
		return (1);
	}
	node = *head;
	for (r = 0; r < index - 1; r++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	next = node->next;
	node->next = next->next;
	free(next);
	return (1);
}
