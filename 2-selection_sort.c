#include "sort.h"

/**
* selection_sort - integers in ascending order using the Selection sort
* @array: list of element int
* @size: size of array
**/
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	int l;

	for (i = 0; i < size - 1; i++)
	{
		unsigned int aux = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[aux])
			{
				aux = j;
			}
		}

		if (aux != i)
		{
			l = array[i];
			array[i] = array[aux];
			array[aux] = l;
			print_array(array, size);
		}
	}
}
