#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_puts - a function to print string;
 *@s: a pointer parameter
 */
void _puts(char *s)
{
unsigned int k = 0;
for(k = 0; k < strlen(s)+1; k++)
{
_putchar(s[k]);
s++;
}
}
