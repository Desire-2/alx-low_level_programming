#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to be listed
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		nodes++;
	}

	printf("%d\n", h->n);

	return (nodes);
}
