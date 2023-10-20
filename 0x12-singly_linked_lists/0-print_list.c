#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h : list_t list
 *
 * Return : the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nnode;

	nnode = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nill)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nnode++;
	}
	return (nnode);
}
