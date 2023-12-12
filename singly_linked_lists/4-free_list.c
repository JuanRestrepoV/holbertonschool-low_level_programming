#include "lists.h"
/**
* free_list - function that frees a list_t list..
* @head: pointer to head node.
*
* Description: function that frees a list_t list..
*/
void free_list(list_t *head)
{
	list_t *actual;
	list_t *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual->str);
		free(actual);
		actual = next;
	}
}
