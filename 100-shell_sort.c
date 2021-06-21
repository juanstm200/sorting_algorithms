#include "sort.h"

/**
 * shell_sort - Write a function that sorts an array of integers
 * @array: list of element int
 * @size: size of array
 **/
void shell_sort(int *array, size_t size)
{
	size_t h, in, out;
	int stored;

	for (h = 1; h < size; h = h * 3 + 1)
	{}

	h = (h - 1) / 3;
	while (h > 0)
	{
		for (out = h; out < size; out++)
		{
			stored = array[out];
			in = out;

			while (in > h - 1 && array[in - h] >= stored)
			{
				array[in] = array[in - h];
				in = in - h;
			}

			array[in] = stored;
		}

		h = h / 3;
		print_array(array, size);
	}
}
