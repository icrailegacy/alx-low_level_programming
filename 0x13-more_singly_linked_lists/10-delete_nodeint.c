#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -deletes the node at index _index_ of a listint_t linked list.
 * where _index_ is the index of the node that should be deleted. Index starts at 0
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1), -1 if it fails.
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}