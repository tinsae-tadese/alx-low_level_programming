#include<time.h>
#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *puts2 - a function that prints every other character of a string.
 *s: a pointer parameter
 */
void puts2(char *s)
{
while(*s != '\0')
{
_putchar(*s);
s = s + 2;
}
_putchar('\n');
}

