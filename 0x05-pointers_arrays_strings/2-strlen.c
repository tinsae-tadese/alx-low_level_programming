#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_strlen - a function that returns length of a string 
 *@s: pointer parameter 
 */
int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
_putchar('\n');
return counter;
}
