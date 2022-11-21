#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * @head: the continous first node
 * @idx: the given value
 * @n: the given value
 * Return: result
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *pointer;
	unsigned int count;

	pointer = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = pointer;
		*head = temp;
		return (temp);
	}
	count = 0;
	while (count != idx - 1)
	{
		if (pointer == NULL || pointer->next == NULL)
			return (NULL);
		pointer = pointer->next;
		count++;
	}
	temp->next = pointer->next;
	pointer->next = temp;
	return (temp);
}
