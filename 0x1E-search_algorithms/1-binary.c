#include "search.h"
#include <stdio.h>

/**
 * binary_search - Fundtion to do binary search on sorted arr
 * @array: The array to search into
 * @size: Size of the array
 * @value: The value we are looking for
 * Return: Idx if found -1 if not
*/
int binary_search(int *array, size_t size, int value)
{
	int i = 0, j = size - 1, mid, l;

	while (i <= j)
	{
		printf("Searching in array: ");
		for (l = i; l <= j; l++)
		{
			if (l == j)
			{
				printf("%d\n", l);
			} else
			{
				printf("%d, ", l);
			}
		}
		mid = i + (j - i) / 2;

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] > value)
		{
			j = mid - 1;
		} else
		{
			i = mid + 1;
		}
	}
	return (-1);
}
