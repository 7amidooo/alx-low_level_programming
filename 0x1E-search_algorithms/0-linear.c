#include "search.h"
#include <stdio.h>

/**
 * linear_search - Function to search for an element
 * @array: The array to search into
 * @size: Size of the array
 * @value: Value we are looking for
 * Return: Idx if we found and -1 if we not
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
