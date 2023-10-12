#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the
 *		nth node of a dlistint_t linked list
 * @head: Head of the list
 * @index: Index of the nth node
 * Return: n_th node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int r;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	r = 0;
	while (head != NULL)
	{
		if (r == index)
			break;
		head = head->next;
		r++;
	}
	return (head);
}
