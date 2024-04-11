#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t node_count;
	list_t *current_node;

	node_count = 0;
	current_node = (list_t *) h;
	while (current_node != NULL)
	{
		if (current_node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current_node->len, current_node->str);
		current_node = current_node->next;
		node_count++;
	}

	return (node_count);
}
