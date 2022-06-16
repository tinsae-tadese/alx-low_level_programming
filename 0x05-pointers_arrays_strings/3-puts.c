#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_puts - a function to print string;
 *@s: a pointer parameter
 */
void _puts(char *s)
{
int k = 0;
while (*s != '\0')
{
_putchar(*s);
k++;
s++;
}
_putchar('\n');
}
