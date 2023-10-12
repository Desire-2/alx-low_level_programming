#include "lists.h"

/**
 * add_dnodeint - Function to add a new node at the beginning
 *		of a dlistint_t list
 * @head: head  list
 * @n:  Element value
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw;
	dlistint_t *_head;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->prev = NULL;
	_head = *head;

	if (_head != NULL)
	{
		while (_head->prev != NULL)
			_head = _head->prev;
	}

	nw->next = _head;

	if (_head != NULL)
		_head->prev = new;

	*head = nw;
	return (nw);
}
