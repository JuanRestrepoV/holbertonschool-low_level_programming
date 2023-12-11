#include "lists.h"
/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer to head node.
*
* Description: function that prints all the elements of a list_t list.
* Return: number of nodes.
*/
size_t print_list(const list_t *h)
{
	size_t node_count;
	const list_t *ptr;

	ptr = h;
	node_count = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
