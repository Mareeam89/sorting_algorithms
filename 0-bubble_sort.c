#include "sort.h"
<<<<<<< HEAD

/**
 *bubble_sort - sorts an array of int in ascending orde
 *@array: array of numbers
 *@size: Size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int num;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				num = array[j];
				array[j] = array[j + 1];
				array[j + 1] = num;
				print_array(array, size);
			}
		}
=======
/**
 * bubble_sort - sort an int array with bubble_sort
 * @array: array of integers of size
 * @size: the sze of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	/* declarations */
	int temp;
	size_t i, j;

	/* check for both array & size */
	if (!(array && size))
		return;

	/* let's sort this thing */
	for (i = 0; i < size;)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
		i++;
>>>>>>> 05e0411aea3d55c5f3af05eb23078fd12a963ceb
	}
}
