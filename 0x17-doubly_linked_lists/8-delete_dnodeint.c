#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a linked list.
 * @head: Pointer to a pointer to the head node of the list.
 * @index: Index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if deletion succeeded, -1 if deletion failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && counter < index)
	{
		current = current->next;
		counter++;
	}

	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);

	return (1);
}
