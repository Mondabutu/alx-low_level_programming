#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t k = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[k])
		k++;

	new->str = strdup(str);
	new->len = k;
	new->next = *head;
	*head = new;

	return (*head);
}