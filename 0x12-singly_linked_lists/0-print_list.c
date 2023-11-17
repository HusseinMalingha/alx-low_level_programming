#include "lists.h"

/**
 * print_list - prints all items in the linked list
 * @h: struct that defines the linked list
 *
 * Return: Node count
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] nil\n");
		}

		h = h->next;

		count++;
	}

	return (count);
}
