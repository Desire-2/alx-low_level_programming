#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *_head;
	dlistint_t *nw;

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = NULL;

	_head = *head;
	if (_head != NULL)
	{
		while (_head->next != NULL)
			_head = _head->next;
		_head->next = nw;
	}
	else
	{
		*head = nw;
	}
	nw->prev = _head;
	return (nw);
}
