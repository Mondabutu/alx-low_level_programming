#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: pointer to the new node, othewise  NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New;
	listint_t *temp = *head;

	New = malloc(sizeof(listint_t));

	if (!New)
		return (NULL);

	New->n = n;
	New->next = NULL;

	if (*head == NULL)
	{
		*head = New;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = New;
	return (*head);
}
