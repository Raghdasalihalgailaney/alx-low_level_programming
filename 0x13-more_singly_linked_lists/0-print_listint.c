#include "lists.h"
/**
 * print_listint - prints alinked listis
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *h);
{
	sizeـt num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	num++;
	}
	return (num);
}
