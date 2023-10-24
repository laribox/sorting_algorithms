#include "sort.h"

/**
 * bubble_sort - sort an array of int with bubble algorithm
 * @array: array of ints
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
  size_t	j;
	size_t	i;
	int	temp;

	i = 0;
	if (array == NULL || size == 0)
		return;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}