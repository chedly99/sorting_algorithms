#include "sort.h"

/**
* swap_items - swap_2_integers
*@x: integer1
*@y: integer2
*/

void swap_items(int *x, int *y)
{
int v;
v = *x;
*x = *y;
*y = v;
}

/**
*selection_sort - sort integers in array
*@array: array of integer
*@size: array size
*/

void selection_sort(int *array, size_t size)
{
unsigned int i, j;
int min;
if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min])
min = j;
}
if ((size_t)min != i)
{
swap_items(&array[min], &array[i]);
print_array(array, size);
}
}
}
