#include "lists.h"

/**
 * insert_dnodeint_at_index - function
 * @h: double pointer parameter
 * @idx: parameter/index
 * @n: parameter
 * Return: result
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temporary, *pointer;
	unsigned int count;

	pointer = *h;
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (count != idx - 1)
	{
		if (pointer == NULL)
			return (NULL);
		pointer = pointer->next;
		count++;
	}
	if (pointer->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	temporary = malloc(sizeof(dlistint_t));
	if (temporary == NULL)
		return (NULL);
	temporary->n = n;
	temporary->next = pointer->next;
	temporary->prev = pointer;
	pointer->next->prev = temporary;
	pointer->next = temporary;
	return (temporary);
}
