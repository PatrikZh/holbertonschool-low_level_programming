#include "lists.h"
/**
 * free_list - function
 * @head: the given value
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}

}
