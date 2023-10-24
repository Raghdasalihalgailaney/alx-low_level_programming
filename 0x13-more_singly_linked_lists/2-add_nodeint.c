#include "lists.h"
/**
 * add_nodeint - adds anew node at the beginning of alinked list
 * @head: pointer to the firstnode in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node,or null if it failes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);
	new->n = n;
new->next = *head;
*head = new;
return (new);
}
