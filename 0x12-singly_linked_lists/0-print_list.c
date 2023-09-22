#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h: pointer to list
 *
 * Return: the numb of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", count, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
