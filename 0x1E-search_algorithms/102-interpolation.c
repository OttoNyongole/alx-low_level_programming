#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @array: pointer to the 1st element of the array
 * @size: numbers of elements in the array
 * @value: value to search for
 * Return: the index of the searched value, otherwise return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1, pos;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		if (array[pos] < value)
			low = pos + 1;
	}

	return (-1);
}
