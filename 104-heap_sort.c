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
 * max_heapify - Turn a binary tree into a complete binary heap.
 * @array: An array of integers to be sorted.
 * @size: The size of the array.
 * @base: The index of the base row of the tree.
 * @root: The root node of the binary tree.
 *
 * Return - Always 0.
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;

	left = 2 * root + 1;
	right = 2 * root + 2;
	large = root;

	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;

	if (large != root)
	{
		swap(array + root, array + large);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}

/**
 * heap_sort - function to sort an array using heap sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Return - Always 0.
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		max_heapify(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		swap(array, array + i);
		print_array(array, size);
		max_heapify(array, size, i, 0);
	}
}
