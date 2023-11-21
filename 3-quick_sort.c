#include "sort.h"
/**
 * swap - swapping of two elements.
 * @x: elements to be swapped.
 * @y: elements to be swapped.
 * @temp - temporary location for the swapping.
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
 * partition - reccursive function to do the partition and swapping.
 * @a: array to be partitioned.
 * @low: starting index
 * @high: ending index
 * @size: size of array
 *
 * Return - Always 0.
 */
void partition(int *a, int low, int high, int size)
{
	int p, w, i;

	if (low < high)
	{
		p = high;
		w = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[p])
			{
				if (i != w)
				{
					swap(&a[i], &a[w]);
					print_array(a, size);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			swap(&a[w], &a[p]);
			print_array(a, size);
		}
		partition(a, low, w - 1, size);
		partition(a, w + 1, high, size);
	}
}

/**
 * quick_sort - function for quick sorting
 * @array: array to be sorted
 * @size: size of array
 *
 * Return - Always 0.
 */
void quick_sort(int *array, size_t size)
{
	partition(array, 0, size - 1, size);
}
