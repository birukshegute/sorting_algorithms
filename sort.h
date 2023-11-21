#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>

extern size_t size;

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *x, int *y);
void partition(int *a, int low, int high, int size);
void shell_sort(int *array, size_t size);
void traverse(int *a, int size, int h);
void counting_sort(int *array, size_t size);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

#endif
