#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer to head node.
*
* Description: function that prints all the elements of a list_t list.
* Return: number of nodes.
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
