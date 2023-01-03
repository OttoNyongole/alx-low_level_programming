#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: the pointer to the 1st element of the array
 * @size: numbers of elements in the array
 * @value: value to search for
 * Return: the index of the searched value, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = 0;
	int i = 0;
	int sqrt_size = 0;

	if (array == NULL || array[0] > value)
		return (-1);
	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, array[end]);
		start = end;
		sqrt_size = sqrt(size);
		end += sqrt_size;
	}
	printf("Value found between indexes [%d] and [%d]\n", start, end);
	if (end > (int)size - 1)
		end = size - 1;
	for (i = start; i <= end && array[i] <= value ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
