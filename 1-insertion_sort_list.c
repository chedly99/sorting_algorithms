#include "sort.h"
/**
 * insertion_sort_list - insertion_sort_list
 * @list: list listint_t
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *n = NULL;
	listint_t *x = NULL;
	listint_t *y = NULL;
	listint_t *temp = NULL;
	listint_t *temp_1 = NULL;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}
	n = (*list)->next;
	while (n)
	{
		y = n;
		x = y->prev;
		while (x && x->n > y->n)
		{
			temp = y->next;
			temp_1 = x->prev;
			x->next = y->next;
			y->prev = x->prev;
			x->prev = y;
			y->next = x;
			if (temp_1)
				temp_1->next = y;
			if (temp)
				temp->prev = x;
			if (!y->prev)
				*list = y;
			print_list(*list);
			x = y->prev;
		}
		n = n->next;
	}
}
