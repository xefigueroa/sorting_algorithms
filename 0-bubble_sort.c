#include "sort.h"

/**
 * bubble_sort - sorts array of ints in asc order w/ Bubble sort
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t count, n, new_n;
	int swap;

	if (array == NULL || size < 2)
	{
		return;
	}

	n = size;
	while (n > 0)
	{
		new_n = 0;
		for (count = 0; count < n - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				swap = array[count];
				array[count] = array[count + 1];
				array[count + 1] = swap;
				new_n = count + 1;
				print_array(array, size);
			}
		}
		n = new_n;
	}
}
