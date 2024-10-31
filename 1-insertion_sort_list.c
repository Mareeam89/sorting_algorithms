#include "sort.h"
/**
<<<<<<< HEAD
 * insertion_sort_list - sort a list
 * @list: UnSorted Linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = swap_node(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
/**
 *swap_node - swap a node helper
 *@node: node
 *@list: node list
 *Return: return pointer of current node
 */

listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
=======
 * insertion_sort_list - sort a dlist via insertion sort
 * @list: the list to sort
 *
 *
 */
void insertion_sort_list(listint_t **list)
{
	/* declarations */
	listint_t *a, *b;

	/* check for bad things */
	if (!(list && *list && (*list)->next))
		return;

	/* set up for some insertion sort & swap */
	a = (*list)->next;

	while (a)
	{
		b = a;
		a = a->next;
		while (b && b->prev)
		{
			if (b->prev->n > b->n)
			{
				swapper(b->prev, b);
				if (!b->prev)
					*list = b;
				/* cast to const for print func */
				print_list((const listint_t *)*list);
			}
			else
				b = b->prev;
		}
	}

}


/**
 * swapper - a function to help swap 2 nodes in a dlist
 * @a: one node
 * @b: the other node
 *
 */
void swapper(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
}
