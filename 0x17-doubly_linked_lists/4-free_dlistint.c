#include "lists.h"

/**
 * free_dlistint - Function frees a dlistint_t list
 * @head: Head list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *_tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((_tmp = head) != NULL)
	{
		head = head->next;
		free(_tmp);
	}
}
