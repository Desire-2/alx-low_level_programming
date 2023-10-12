#include "lists.h"

/**
 * dlistint_len - Function that returns
 * the number of elements in  double linked list
 * @h: Head  list
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int _cnt = 0;

	if (h == NULL)
		return (_cnt);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		_cnt++;
		h = h->next;
	}

	return (_cnt);
}
