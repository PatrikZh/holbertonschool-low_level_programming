#include "lists.h"
#include <string.h>
/**
 * add_node - add node in the beggining
 * @head: the head node
 * @str: the string
 * Return: result
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
