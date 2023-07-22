#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order using the
 * selection sort algorithm
 * @array: an array of integers
 * @size: side of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t min, i, j;
	int swp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (i != min)
		{
			swp = array[i];
			array[i] = array[min];
			array[min] = swp;
			print_array(array, size);
		}
	}
}
