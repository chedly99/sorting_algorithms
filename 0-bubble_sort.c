#include "sort.h"
/**
* swap_items - swap_2_integers
* @x: integer1
* @y: integer2
*/
void swap_items(int *x, int *y)
{
int v;

v = *x;
*x = *y;
*y = v;
}

/**
* bubble_sort - sort integer in print_array
* @array: array
* @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
unsigned int i;
unsigned int j;

if (array == NULL || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - 1 ; j++)
{
if (array[j] > array[j + 1])
{
swap_items(&array[j], &array[j + 1]);
print_array(array, size);
}
}
}
}
