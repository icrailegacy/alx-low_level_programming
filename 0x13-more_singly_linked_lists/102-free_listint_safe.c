#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t list.
 * This function can free lists with a loop
 * You should go though the list only once
 * Returns: the size of the list that was free’d
 * The function sets the head to NULL
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
