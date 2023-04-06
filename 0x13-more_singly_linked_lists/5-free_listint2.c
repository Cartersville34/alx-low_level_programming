#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 *
 * @head: pointer to the first node of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}

