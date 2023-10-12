#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 *
 * @head: Head list
 * @index: new node Index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int r;
	dlistint_t *_h1 = *head;
	dlistint_t *_h2;

	if (_h1 != NULL)
		while (_h1->prev != NULL)
			_h1 = _h1->prev;

	r = 0;

	while (_h1 != NULL)
	{
		if (r == index)
		{
			if (r == 0)
			{
				*head = _h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				_h2->next = _h1->next;

				if (_h1->next != NULL)
					_h1->next->prev = _h2;
			}
			free(_h1);
			return (1);
		}
		_h2 = _h1;
		_h1 = _h1->next;
		r++;
	}

	return (-1);
}
