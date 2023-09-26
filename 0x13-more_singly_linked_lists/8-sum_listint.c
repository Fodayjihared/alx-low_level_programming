#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - Calculate the sum of data in the lst.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The sum of all the data in the linked lst.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
