#ifndef SORT_H
#define SORT_H

<<<<<<< HEAD
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
=======
#include <stdio.h>
#include <stdlib.h>

/* linked list struct they gave us */
/**
 * struct listint_s - Doubly linked list node
 *
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
<<<<<<< HEAD
=======

>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

<<<<<<< HEAD
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
=======
/* prototypes - theirs*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

<<<<<<< HEAD
#endif
=======
/* prototypes - mine */
void swap(int *array, int a, int b);
void swapper(listint_t *a, listint_t *b);
size_t knuth_gap(size_t size);
void kwiksort(int *array, size_t size, ssize_t low, ssize_t high);
size_t partition(int *array, size_t size, ssize_t low, ssize_t high);
void swaps(int *array, size_t size, int *a, int *b);
#endif /* SORT_H */
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
