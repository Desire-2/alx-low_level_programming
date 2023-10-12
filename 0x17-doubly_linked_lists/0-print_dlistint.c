#include "lists.h"

/**
 * print_dlistint - Function that Prints all the elements of a
 * dlistint_t list
 * @h: head list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int _cnt;

	_cnt = 0;
	if (h == NULL)
		return (_cnt);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
