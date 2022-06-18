#include "main.h"
/**
 *print_array - a function that prints n elements of an array
 *@a : a pointer to array;
 *@n : no of elements to printed.
 */
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%d",a[i]);
if(i != n-1)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
}
