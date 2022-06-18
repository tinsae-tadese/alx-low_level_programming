#include<time.h>
#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *puts_half - a function that prints half of a string.
 *@s: a pointer parameter
 */

void puts_half(char *s)
{
int i = 0;
int middle = 0;
while (s[i] != '\0')
{
i++;
}
if ((i) % 2 == 0)
{
middle = i / 2;
}
else
{
middle = (i - 1) / 2;
}
while (s[middle] != '\0')
{
_putchar(s[middle]);
middle++;
}
_putchar('\n');
}
