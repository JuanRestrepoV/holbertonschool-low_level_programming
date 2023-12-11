#include "lists.h"
/**
* list_len -  function that returns the number of elements in a linked
* list_t list.
* @h: pointer to head node.
*
* Description:  function that returns the number of elements.
* Return: number of elements or nodes.
*/
size_t list_len(const list_t *h)
{
	size_t node_count;
	const list_t *ptr;

	ptr = h;
	node_count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
