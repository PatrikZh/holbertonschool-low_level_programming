#include "lists.h"

/**
 * free_dlistint - function
 * @head: double pointer/double link list 
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
