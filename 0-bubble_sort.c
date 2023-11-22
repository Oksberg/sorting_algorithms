#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t i, j = 0;
	int temp;
	int flag = 0;

	if (size > 1)
	{
		for (i = 0; i < size - 1; i++)
		{
			flag = 0;
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					flag = 1;
				}
			}
			if (flag != 0)
				print_array(array, size);
			else
				break;
		}
	}
}
