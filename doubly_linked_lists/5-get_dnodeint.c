#include "lists.h"

/**
 * get_dnodeint_at_index - function
 * @head: double pointer/double link list
 * @index: the 9th value in this situation
 * Return: result
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
