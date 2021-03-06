#include "search_algos.h"

/**
 * binary_search - searching the value in the array with the binary_search
 * @array: array of numbers
 * @size: size of array
 * @value: number to search
 * Return: return number and idx
 */
int binary_search(int *array, size_t size, int value)
{
	int z;
	int i = 0;
	int right = size - 1;
	int mid = (i + right) / 2;

	if (array == NULL)
		return (-1);

	while (i <= right)
	{
		printf("Searching in array: ");
		for (z = i; z <= right - 1; z++)
			printf("%d, ", array[z]);
		printf("%d\n", array[z]);

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			i = mid + 1;
		mid = (i + right) / 2;
	}
	return (-1);
}
