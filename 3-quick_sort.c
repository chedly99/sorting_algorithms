#include "sort.h"

/**
* swap - swap two intgers
* @x: first element (integer)
* @y: second element (integer)
* Return: void
*/
void swap(int *x, int *y)
{
int tmp;

tmp = *x;
*x = *y;
*y = tmp;
}

/**
* partition - Takes last element as pivot
* @array: array of integers
* @begin: integer
* @end: integer
* @size: size of the array
* Return: integer
*/
int partition(int *array, int begin, int end, size_t size)
{
int piv = array[end];
int i = (begin - 1);
int j;

for (j = begin; j <= end - 1; j++)
{
if (array[j] <= piv)
{
i++;
swap(&array[i], &array[j]);
if (i != j)
print_array(array, size);
}
}
swap(&array[i + 1], &array[end]);
if (end != (i + 1))
print_array(array, size);
return (i + 1);
}

/**
* sort - quick sort integer in an array
* @array: array of integers
* @begin: begining
* @end: end
* @size: size of the array
* Return: void
*/
void sort(int *array, int begin, int end, size_t size)
{
int index;

if (begin < end)
{
index = partition(array, begin, end, size);
sort(array, begin, index - 1, size);
sort(array, index + 1, end, size);
}
}

/**
* quick_sort - Sorts integers in an array
* @array: Array containing integers
* @size: size of the array
* Return: void
*/

void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;
sort(array, 0, size - 1, size);
}
