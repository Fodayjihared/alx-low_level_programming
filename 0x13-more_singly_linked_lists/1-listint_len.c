#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
