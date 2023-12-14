#include "lists.h"
#include <stdlib.h>
/**
* free_dlistint -  function that frees a dlistint_t list.
* @head: pointer to head node.
*
* Description: frees a dlistint_t list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node;

	while (head != NULL)
	{
		actual_node  = head;
		head = head->next;
		free(actual_node);
	}
}
