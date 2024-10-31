#include "sort.h"

<<<<<<< HEAD
/**
* stupify - recurrssive heapSort
* @array: Array of int
* @heap: size of heap data
* @i: index
* @size: size of array
*/

void stupify(int *array, int heap, int i, int size)
{
	int lar = i, left = 2 * i + 1, right = 2 * i + 2, t;

	if (left < heap && array[left] > array[lar])
		lar = left;
	if (right < heap && array[right] > array[lar])
		lar = right;
	if (lar != i)
	{
		t = array[i], array[i] = array[lar], array[lar] = t;
		print_array(array, size);
		stupify(array, heap, lar, size);
	}
}

/**
* heap_sort - Sorts array with heap sort algo
* @array: array to sort
* @size: Size of array to sort
*/

void heap_sort(int *array, size_t size)
{
	int i = size / 2 - 1, temp;

	if (array == NULL || size < 2)
		return;
	for (; i >= 0; i--)
		stupify(array, size, i, size);
	for (i = size - 1; i >= 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		if (i > 0)
			print_array(array, size);
		stupify(array, i, 0, size);
	}

=======
void sift_down(int *array, size_t start, size_t end, size_t size);
void swap_elem(int *arr, size_t size, int *a, int *b);


/**
 * sift_down - Builds heap form bottom up
 *
 * @array: List to be sorted
 * @start: Subscript of the root ot the heap
 * @size: Size of array
 * @end: Subscript of the last element of the heap
 */
void sift_down(int *array, size_t start, size_t end, size_t size)
{
	size_t root, child, swap;

	root = start;

	while ((root * 2) + 1 <= end)
	{
		/* Subscript of left child */
		child = (root * 2) + 1;
		swap = root;

		if (array[swap] < array[child])
		{
			/* Swap root and left child */
			swap = child;
		}
		if (child + 1 <= end && array[swap] < array[child + 1])
		{
			/* Swap root with right child */
			swap = child + 1;
		}
		/* If one child is greater than other */
		if (swap != root)
		{
			swap_elem(array, size, &array[root], &array[swap]);
			root = swap;
		}
		else
		{
			return;
		}
	}
}


/**
 * heapify - Arranges heap so largest number is root
 * @array: array (for print)
 * @size: size of array (for print)
 */
void heapify(int *array, size_t size)
{
	int start;

	/* Last non-leaf */
	start = (size / 2) - 1;

	while (start >= 0)
	{
		sift_down(array, start, size - 1, size);
		start--;
	}
}


/**
 * heap_sort - Sort list in ascending order
 * @array: Array to be sorted
 * @size: Size of the array
 * Return: Void
 */
void heap_sort(int *array, size_t size)
{
	size_t last;

	if (!array || size < 2)
	{
		return;
	}

	last = size - 1;

	heapify(array, size);

	while (last > 0)
	{
		swap_elem(array, size, &array[last], &array[0]);
		last--;
		sift_down(array, 0, last, size);
	}
}

/**
 * swap_elem - swap value of array elements
 * @array: array (for print)
 * @size: size of array (for print)
 * @a: pointer to array element
 * @b: pointer to array element
 */
void swap_elem(int *array, size_t size, int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, size);
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
}
