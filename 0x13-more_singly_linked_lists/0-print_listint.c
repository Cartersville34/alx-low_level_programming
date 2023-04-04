#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 *
 * @h: pointer to first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current_node = h;

	/* return 0 as no of nodes when h is null*/
	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		node_count++;
	}

	return (node_count);
}

