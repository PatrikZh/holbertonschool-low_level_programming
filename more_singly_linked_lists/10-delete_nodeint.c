#include "lists.h"

/**
 * delete_nodeint_at_index - function
 * @head: the continous first node
 * @index: the given value
 * Return: result
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *rm;
	unsigned int count;
	/* rm = remove */
	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	count = 0;
	while (count !=  index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		count++;
	}
	rm = temp->next;
	temp->next = temp->next->next;
	rm->next = NULL;
	free(rm);
	return (1);
}
