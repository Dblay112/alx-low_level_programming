#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 *
 * @n: int
 * @signal: node index
 * @next: pointer to the next node
 *
 */
typedef struct listint_s
{
		int n;
		size_t signal;
		struct listint_s *next;
} listint_t;

/**
 * struct wipelist_s - singly linked list
 *
 * @n: int
 * @signal: node index
 * @next: pointer to the next node
 * @special: pointer
 *
 */
typedef struct wipelist_s
{
				int n;
				size_t signal;
				struct wipelist_s *next;
				struct wipelist_s *special;
} wipelist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
