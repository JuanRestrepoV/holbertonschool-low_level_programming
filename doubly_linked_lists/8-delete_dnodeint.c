#include <stdlib.h>
#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes the node at a given position.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node to be deleted. Index starts at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (-1);
	}

	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		return (-1);
	}

	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
