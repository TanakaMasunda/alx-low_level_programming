#include "lists.h"

/**
 * *add_nodeint - add a node at the beginning of a lits listint_t
 * @n: integer
 * @head: head of the list::
 * Return: return address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
