#include "lists.h"
/**
 * print_dlistint - prints all the nodes
 *@h: is the pointer to node structure
 *Return: the amount of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
