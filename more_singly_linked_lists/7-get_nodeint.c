#include "lists.h"

/**
 * get_nodeint_at_index - function
 * @head: the continous first node
 * @index: the given value
 * Return: result
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
