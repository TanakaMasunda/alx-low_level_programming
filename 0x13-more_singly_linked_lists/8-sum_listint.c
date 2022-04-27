include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a linked list
 * @head: head of a list
 * Return: head of a list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
