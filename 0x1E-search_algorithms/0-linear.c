#include "search_algos.h"

/**
  * linear_search - function to search
  * @array: A pointer to the 1st element
  * @size: total number of elements
  * @value: value to be search
  *
  * Return: sucess
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
