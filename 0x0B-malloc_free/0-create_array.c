#include<stdio.h>
/**
 *create_array - a function that creates array of char.
 *@size - a paramter that holds size of an array.
 *@c specific char to assicgn an array with.
 */
char *create_array(unsigned int size, char c)
{
int *ptr = NULL;
if(size ==0 )
{
return NULL;
}
else
{
ptr = (int*)malloc(size*sizeof(char));
if(c != NULL)
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
