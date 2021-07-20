#include "sort.h"

/**
* insertion_sort_list - sort doubly lnkd ls of ints(asc order) w/Insertion sort
* @list: double pointer to doubly-linked list
*
* Return: Void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *prior = NULL, *after = NULL;

	if (!list || !(*list) || !(*list)->next)
	{
		return;
	}

	curr = (*list)->next;
	while (curr)
	{
		prior = curr->prev;
		after = curr->next;
		while (prior && curr->n < prior->n)
		{
			if (prior->prev)
			{
				prior->prev->next = curr;
			}

			prior->next = curr->next;
			curr->next = prior;
			curr->prev = prior->prev;
			prior->prev = curr;

			if (prior->next)
			{
				prior->next->prev = prior;
			}

			if (!curr->prev)
			{
				(*list) = curr;
			}

			print_list(*list);
			prior = curr->prev;
		}
		curr = after;
	}
}
