#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Bubble sort */
void bubble_sort(int *array, size_t size);

/* Print List */
void print_list(const listint_t *list);

/* Print Array */
void print_array(const int *array, size_t size);

/* Insertion sort */
void insertion_sort_list(listint_t **list);

/* Selction sort */
void selection_sort(int *array, size_t size);

/* Quick Sort */
void quick_sort(int *array, size_t size);

/*Recursivity sort*/
void recursivity_sort(int *array, int ka, int jey, size_t tam);

/*matrix sorting*/
size_t matrix_sorting(int *array, int ka, int jey, size_t tam);

/*integers in ascending order using the Shell sort algorithm*/
void shell_sort(int *array, size_t size);
#endif
