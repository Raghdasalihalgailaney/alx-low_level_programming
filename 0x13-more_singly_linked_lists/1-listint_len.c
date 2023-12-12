#include "lists.h"
/**
 * print_listint - prints alinked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t listint_len(const listint_t *h);
{
	size_t num = 0;

	while (h)
	{
	h = h->next;
	num++;
	}
	return (num);
}
