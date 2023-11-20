#include "sort.h"
/**
 * bubble_sort - function to bubble sort algorithm;
 * @array: input array to be sorted
 * @size: size of array
 *
 * Return -  Always 0
 */
void bubble_sort(int *array, size_t size)
{
	int *temp;

	for(int i = 0, i < size, i++)
	{
		for(int j = 0, j < (size - 1), j++)
		{
			if(array(j) > array(j+1))
			{
				temp = array(j);
				array(j) = array(j+1);
				array(j+1) = temp;
				print_array(array, size);
			}
		}
	}
}
