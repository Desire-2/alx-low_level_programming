#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *p;

	 node = malloc(sizeof(listint_t));
        if (node == NULL)
                return (NULL);

        node->n = n;
        node->next = NULL;


	p = *head;
	if (p == NULL)
		*head = node;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = node;

	/*node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = ng
gnode->next = NULL;*/
	}

	return (*head);
}
