#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *print_rev - a function to print string in reverse order
 *@s: a pointer parameter
 *_strlen - a function that returns a length of a string.
 */
void print_rev(char *s)
{
int lpos = _strlen(s);
s = s + lpos;
while (lpos > 0)
{
s--;
lpos--;
_putchar(*s);
}
_putchar('\n');
}

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
