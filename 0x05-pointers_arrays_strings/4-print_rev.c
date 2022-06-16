#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *print_rev - a function to print string in reverse order
 *_strlen - a function to find length of  a sring.
 *@s: a pointer parameter
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