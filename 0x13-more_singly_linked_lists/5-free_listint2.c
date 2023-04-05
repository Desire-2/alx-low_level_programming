#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *free_size, *temp;


	if (head != NULL)
	{
		free_size = *head;
	while ((temp = free_size) != NULL)
		{
		       free_size = free_size->next;
			free(temp);
		}

		*head = NULL;
	}
}
