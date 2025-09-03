#include "lists.h"
#include <string.h>
#include <stdlib.h>



list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new node;
	list_t *current_nodes;
	unsigned int len = 0;
	const char *s;
	unsigned int i;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	s = str;
	while (*s)
	{
		len++;
		s++;
	}
	new_node->str = malloc(sizeof(char) * (len +1));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	for (i = 0; i < len; i++)
	{
		new_node->str[i] = str[i]
	}

	new_node->str[len] = '\0';

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
		{
			current_node->next = new node;
		}
		return (new node);
	}


