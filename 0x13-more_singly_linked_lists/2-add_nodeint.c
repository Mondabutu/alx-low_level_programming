#include "lists.h"
/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: This is the pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: pointer to the new node, otherwise NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New;

	New = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	New->n = n;
	New->next = *head;
	*head = new;

	return (*head);
}
