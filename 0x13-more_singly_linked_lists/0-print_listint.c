#include "lists.h"

/**
 * print_listint - print elements of the linked list
 * @h: pointer to struct of linked list
 *
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count;

	node_count = 0;
	while (h != NULL)
	{
		_putchar(h->n + '0');
		_putchar('\n');
		h = h->next;
		node_count++;
	}

	return (node_count);
}
