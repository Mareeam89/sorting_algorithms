#include "sort.h"
<<<<<<< HEAD
/**
 * selection_sort - function that sorts an array
 *@size:  size of array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t i, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
=======

/**
 * selection_sort - choose the min number and swap between the initial
 *
 * @array: array of integers
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, index, swap;
	int little;

	if (size <= 1)
		return;

	for (j = 0; j < size; j++)
	{
		/* step1: while through the array to find the small number */
		swap = 0;
		little = array[j];
		for (i = j; i < size; i++)
		{
			if (array[i] < little)
				little = array[i], index = i, swap = 1;
		}
		/* swap */
		if (swap == 1)
		{
			array[index] = array[j];
			array[j] = little;
			print_array(array, size);
		}
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
	}
}
