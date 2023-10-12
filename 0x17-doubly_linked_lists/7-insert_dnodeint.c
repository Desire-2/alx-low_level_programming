#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at
 *				a given position
 * @h: Head list
 * @idx:  new node Index
 * @n: New node value
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int r;
	dlistint_t *nw;
	dlistint_t *hd;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		hd = *h;
		r = 1;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = head->prev;
		while (hd != NULL)
		{
			if (i == idx)
			{
				if (hd->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = hd->next;
						nw->prev = hd;
						head->next->prev = nw;
						hd->next = nw;
					}
				}
				break;
			}
			hd = hd->next;
			r++;
		}
	}

	return (nw);
}
