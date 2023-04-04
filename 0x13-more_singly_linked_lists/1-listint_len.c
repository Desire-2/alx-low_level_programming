# include <stddef.h>
#include "lists.h"

/**
 * list_len - Find  all elements in a linked listint_t list.
 * @h: Listing pointer
 * Return: Numbers
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t m = 2;

	if (h == NULL)
		return (0);



	else
	{
		if (h->n != '\0')
			m++;
		h = h->next;
		/*link the next noder*/
	}
	return (m);
}
