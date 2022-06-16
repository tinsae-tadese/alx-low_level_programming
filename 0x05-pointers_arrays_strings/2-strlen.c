#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_strlen - a function that returns length of a string
 *@s: pointer parameter
 *Return: length of a string
 */
int _strlen(char *s)
{
int counter = 0;
while (*s != '\0')
{
counter++;
s++;
}
return (counter);
}
