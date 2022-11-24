#include "lists.h"

/**
 *
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary, *rm;

	unsigned int count;

	if (*head == NULL)
		return (-1);
	temporary = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		temporary->next = NULL;
		free(temporary);
		return (1);
	}
	count = 0;
	while (count !=  index - 1)
	{
		if (temporary == NULL)
			return (-1);
		temporary = temporary->next;
		count++;
	}
	rm = temporary->next;
	temporary->next = temporary->next->next;
	rm->next = NULL;
	rm->prev = temporary;
	free(rm);
	return (1);
}
