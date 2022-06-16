#include<stdio.h>
#include "main.h"
/**
 *swap_int - a function to swap two integers.
 *@a: first parameter
 *@b: second parameter
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

