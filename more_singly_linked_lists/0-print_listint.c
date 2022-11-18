#include "lists.h"

/**
 * print_listint - function
 * @h: the given value
 * Return: function
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
		printf("\n");
	}
	return (i);
}
