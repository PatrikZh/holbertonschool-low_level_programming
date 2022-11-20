#include "lists.h"

/**
 * pop_listint - function
 * @head: the continous node
 * Return: result
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	n = 0;
	while (*head)
	{
		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
