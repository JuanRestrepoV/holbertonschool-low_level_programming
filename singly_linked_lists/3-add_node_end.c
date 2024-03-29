#include "lists.h"
/**
* add_node_end - function that adds a new node at the end of a list_t list.
* @head: double pointer to head node.
* @str: string to duplicate on head nodes.
*
* Description: adds a new node at the end of a list_t list.
* Return: address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *temp_node;

		temp_node = *head;
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}
	return (new_node);
}
