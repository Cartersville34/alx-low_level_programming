#include "lists.h"

/**
 *listint_len - a function that returns the number of elements
 *
 *@h: pointer to the head node of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	/* If the head pointer is NULL, the list is empty */
	if (h == NULL)
		return (0);

	/* Traverse the list and count the number of elements */
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

