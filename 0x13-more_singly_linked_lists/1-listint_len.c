# include <stddef.h>
#include "lists.h"
/**
 * listint_len - a function that returns the number of elements.
 * @h: pointer to the first node
 * Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t m = 1;

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
