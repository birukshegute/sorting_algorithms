#ifndef SORT_H
#define SORT_H

#include <stddef.h>

extern size_t size;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);
void partition(int *a, int low, int high, int size);
void shell_sort(int *array, size_t size);
/*void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
*/

#endif
