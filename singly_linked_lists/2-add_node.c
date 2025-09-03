#include "lists.h"
#include <string.h>
#include <std.lib>






list_t *add_node(list_t **head, const char *str)
{
	list* new node;
	char*dup_str;
	unsigned int len = 0;
	const char*s;
