#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at an index.
 * @head: Pointer to a pointer to the head.
 * @index: Index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the node is successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *prev;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		listint_t *temp = (*head)->next;

		free(*head);

		*head = temp;

		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
