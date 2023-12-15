#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: index of the node, starting from 0
*
* Return: Address of the node at the given index, or NULL if it doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count, i;
	dlistint_t *temp;

	count = 0;
	temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (count <= index)
	{
		return (NULL);
	}

	for (i = 0; i < count - index - 1; i++)
	{
		head = head->next;
	}
	return (head);
}
