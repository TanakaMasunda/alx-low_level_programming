#include "lists.h"

/**
 * listint_len - length of the list
 * @h: head of the list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
