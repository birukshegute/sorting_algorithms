#include "sort.h"
/**
 * swap - swapping of two elements.
 * @x,y - elements to be swapped
 * @temp - temporary location for the swapping
 *
 * Return - 0 on success
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * selection_sort - selection sorting of an array
 * @array: input array
 * @size: size of array
 *
 * Return - Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
