#include "lists.h"

/**
 * delete_dnodeint_at_index - function
 * @head: double pointer/double link list parameter
 * @index: parameter
 * Return: result
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporary, *rm;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	temporary = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		*head = temporary->next;
		(*head)->prev = NULL;
		free(temporary);
		return (1);
	}
	while (count !=  index - 1)
	{
		if (temporary == NULL)
			return (-1);
		temporary = temporary->next;
		count++;
	}
	rm = temporary->next;
	temporary->next = rm->next;
	if (rm->next != NULL)
	{
		rm->next->prev = rm->prev;
		rm->next = NULL;
		rm->prev = NULL;
	}
	free(rm);
	return (1);
}
