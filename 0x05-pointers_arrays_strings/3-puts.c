#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_puts - a function to print string;
 *@s: a pointer parameter
 */
void _puts(char *s)
{
for(int k = 0; k < strlen(s); k++)
{
_putchar(*s);
s += 1;
}
}
