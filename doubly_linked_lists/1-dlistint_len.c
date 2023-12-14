#include "lists.h"
/**
* dlistint_len -  function that returns the number of elements
* in a linked dlistint_t list.
* @h: pointer to dlistint variable.
*
* Description: this function iterates a node_count variable that get
* the count of nodes iterating the list.
* Return: number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count;
	const dlistint_t *ptr;

	node_count = 0;
	ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		node_count++;
	}
	return (node_count);
}
