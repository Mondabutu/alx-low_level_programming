#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The new node integer data 
 * Return: The address of the new inserted node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t k = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (!*head && !idx)
	{
		*head = node;
		return (node);
	}

	else if (!*head && idx)
		return (NULL);

	else if (!idx)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	while (k < (idx - 1))
	{
		temp = temp->next;
		k++;
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}