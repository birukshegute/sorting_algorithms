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
 * traverse - function to go through array members
 * @a: array to be traversed through
 * @size: size of array
 * @h: gap
 *
 * Return - Always 0
 */
void traverse(int *a, int size, int h)
{
	int i, j;

	for (i = 0; (i + h) < size; i++)
	{
		for (j = i + h; (j - h) >= 0; j = j - h)
		{
			if (a[j] < a[j - h])
				swap(&a[j], &a[j - h]);
		}
	}
	print_array(a, size);
}
/**
 * shell_sort - function to sort uding knuth shell sort
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return - Always 0.
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 1;

	while (h < size)
		h = h * 3 + 1;

	while ((h = (h - 1) / 3) > 0)
		traverse(array, size, h);
}
