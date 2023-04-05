#include "lists.h"
#include "stdlib.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *free_size;

	while ((free_size = head) != NULL)
	{
		head = head->next;
		free(free_size);
	}
}
