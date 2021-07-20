#include "sort.h"

/**
 * selection_sort - sort array of ints in asc order w/Selection sort
 * @array: array to sort
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, v, min;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (v = i + 1; v < size; v++)
		{
			if (array[v] < array[min])
			{
				min = v;
			}
		}
		if (i != min)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
