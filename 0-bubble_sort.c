#include "sort.h"
/**
 * bubble_sort - sorts arrayo of integers in ascending order using bubble sort
 * @array: unsorted array of integers
 * @size: size of the array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int swp;

	if (array == NULL || size == 0 || size == 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swp;
				print_array(array, size);
			}
		}
	}
}
