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

for (i = 0; i < size - 1; i++)
{
min = i;
j = i + 1;
while (j < size)
{
if (array[j] < array[min])
min = j;
j++;
}
swap_items(&array[min], &array[i]);
print_array(array, size);
}
}
