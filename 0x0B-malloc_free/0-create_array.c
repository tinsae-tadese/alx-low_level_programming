#include<stdlib.h>
#include "main.h"
/**
 *create_array - a function that creates array of char.
 *@size: a paramter that holds size of an array.
 *@c: specific char to assicgn an array with.
 *Return: A pointer to block of memory allocate for the array.
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
if (size ==0 )
{
return (NULL);
}
else
{
ptr = malloc(size * sizeof(char));
if (ptr != NULL)
{
unsigned int i;
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
else
{
return (NULL);
}
}
return (ptr);
}
