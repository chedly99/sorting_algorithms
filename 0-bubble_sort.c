#include "sort.h"

/**
* bubble_sort - Sortes inetegers in an array
* @array: array of integers
* @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
unsigned int i, j;
int tmp;

if (!array || size < 2)
return;
for (i = 0; i < size; i++)
{
for (j = 0; j < size - 1; j++)
{
if (array[j] > array[j + 1])
{
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
print_array(array, size);
}
}
}
}
