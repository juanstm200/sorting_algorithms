#include "sort.h"
/**
 * insertion_sort_list - function to order whyt the method insertion
 * @list: value of the array or link list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *listC;

	if (list == NULL)
		return;
	listC = (*list)->next;

	while (listC)
	{
		while (listC->prev != NULL && listC->prev->n > listC->n)
		{
			listC->prev->next = listC->next;
			if (listC->next != NULL)
			{
				listC->next->prev = listC->prev;
			}
			listC->next = listC->prev;
			listC->prev = listC->prev->prev;
			listC->next->prev = listC;
			if (listC->prev != NULL)
			{
				listC->prev->next = listC;
			}
			else
			{
				(*list) = listC;
			}
			print_list(*list);
		}
		listC = listC->next;
	}
}
