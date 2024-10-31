#include "sort.h"
<<<<<<< HEAD

/**
 * swap - swap two int
 * @a: int
 * @b: int
 * Return: (void) Swaped int
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * partition - Partition an array and using pivot
 * @array: Array
 * @low: int
 * @high: int
 * @size: size of array (size_t)
 * Return: index of pivote (int)
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int x = low - 1, y;

	for (y = low; y <= high; y++)
	{
		if (array[y] <= pivot)
		{
			x++;
			if (x != y)
			{
				swap(&array[x], &array[y]);
				print_array(array, size);
			}
		}
	}
	return (x);
}
/**
 * lomuto_qsort - Sorting Recursively an Array
 * @array: Array to be sorted
 * @low: The lowest value of the array
 * @high: highest value of the array
 * @size: Size of The Array
 * Return: void
 */
void lomuto_qsort(int *array, int low, int high, size_t size)
{
	int i;

	if (low < high)
	{
		i = partition(array, low, high, size);
		lomuto_qsort(array, low, i - 1, size);
		lomuto_qsort(array, i + 1, high, size);
	}
}
/**
 * quick_sort - Quick Sort Algorithme using lomuto partition
 * @array: Array to sort
 * @size: Size of The Array
 * Return: Sorted Array (void)
 */
void quick_sort(int *array, size_t size)
{
	lomuto_qsort(array, 0, size - 1, size);
}
=======
void qs_partition(int *arr, size_t size, size_t left, size_t right);
void swap_elem(int *arr, size_t size, int *a, int *b);
/**
 * quick_sort - sorts an array in ascending order
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		qs_partition(array, size, 0, size - 1);
}
/**
 * qs_partition - sorts partition according to pivot
 * @arr: original array
 * @size: size of original array
 * @left: leftmost element of partition
 * @right: rightmost element of partition
 */
void qs_partition(int *arr, size_t size, size_t left, size_t right)
{
	int pivot = arr[right]; /* pivot is last elem */
	size_t i, j;

	if (left < right)
	{
		for (i = j = left; j < right; j++)
		{
			if (arr[j] <= pivot)
			{
				swap_elem(arr, size, &arr[j], &arr[i]);
				i++;
			}
		}
		swap_elem(arr, size, &arr[j], &arr[i]);

		/* lesser partition */
		if (i > 0)
			qs_partition(arr, size, left, i - 1);
		/* greater partition */
		qs_partition(arr, size, i + 1, right);
	}
}
/**
 * swap_elem - swap value of array elements
 * @arr: array (for print)
 * @size: size of array (for print)
 * @a: pointer to array element
 * @b: pointer to array element
 */
void swap_elem(int *arr, size_t size, int *a, int *b)
{
	int tmp;

	if (*a != *b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		print_array(arr, size); /* print updated array */
	}
}
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
