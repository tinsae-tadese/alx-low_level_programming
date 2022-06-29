#include<stdio.h>
#include "main.h"
/**
 *create_array - a function that creates array of char.
 *@size - a paramter that holds size of an array.
 *@c specific char to assicgn an array with.
 */
char *create_array(unsigned int size, char c)
{
char *ptr = NULL;
if(size ==0 )
{
return NULL;
}
else
{
ptr = malloc(size*sizeof(char));
if(ptr != NULL)
{
int i;
for(i = 0; i < size; i++)
{
ptr[i] = c;
}
}
else
{
return NULL;
}
}
return ptr;
}
