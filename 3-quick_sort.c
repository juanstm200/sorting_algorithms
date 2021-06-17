#include "sort.h"
/**
 * quick_sort - function that sorts an array of integers.
 * @array: recive array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	recursivity_sort(array, 0, size - 1, size);
}

/**
 * recursivity_sort - function recursive sort
 * @array: receive array.
 * @ka: receives variable.
 * @jey: recieves variable.
 * @tama_no: recieve size array
 */

void recursivity_sort(int *array, int ka, int jey, size_t tama_no)
{
	int pivote;

	if (ka < jey)
	{
		pivote = matrix_sorting(array, ka, jey, tama_no);
		recursivity_sort(array, ka, pivote - 1, tama_no);
		recursivity_sort(array, pivote + 1, jey, tama_no);
	}
}
/**
 * matrix_sorting - part the array to sort it.
 * @array: receives array.
 * @ka: receive variable.
 * @jey: receive varible.
 * @tama_no: receive size array.
 * Return: pivote is the variable piv.
 */

size_t matrix_sorting(int *array, int ka, int jey, size_t tama_no)
{
	int pivote;
	int i;
	int j;
	int k;

	pivote = array[jey];

	i = ka - 1;
	for (j = ka; j < jey; j++)
	{
		if (array[j] <= pivote)
		{
			i++;
			if (i != j)
			{
				k = array[i];
				array[i] = array[j];
				array[j] = k;
				print_array(array, tama_no);
			}
		}
	}
	i++;
	if (i != j)
	{
		k = array[i];
		array[i] = array[jey];
		array[jey] = k;
		print_array(array, tama_no);
	}
	return (i);
}
