#include "lists.h"

/**
 * listint_len - function
 * @h: the given value
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
