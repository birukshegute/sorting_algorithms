#ifndef SORT_H
#define SORT_H

#include <stddef.h>

extern size_t size;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);

#endif
