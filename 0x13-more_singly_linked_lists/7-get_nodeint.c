#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - find a specific node in a listint_t linked list
 *
 * @head:pointer to the head of the listint_t list
 * @index: index specifies the position of node to be located. start from 0.
 *
 * Return: If the node does not exist - NULL.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int cont = 0;

	while (node && cont != index)
	{
		cont++;
		node = node->next;
	}
	if (node && cont == index)
		return (node);
	return (NULL);
}


