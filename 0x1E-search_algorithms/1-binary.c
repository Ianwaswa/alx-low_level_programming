#include "search_algos.h"

/**
 * print_array - Display the elements of an array separated by commas
 *
 * @array: Pointer to the array to print
 * @first: The index of the first element to print
 * @last: The index of the last element to print
 */

void print_array(int *array, size_t first, size_t last)

{
	size_t i;

	printf("Searching in the array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Search for a value in a sorted array using the binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)

{
	size_t i = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2; /* Determine the middle index */

			if (value > array[i]) /* If value is in the right half of the array */
				first = i + 1;
			else if (value < array[i]) /* If value is in the left half of the array */
				last = i - 1;
			else /* If value is found */
				return (i);
		}
	}

	return (-1);
}

