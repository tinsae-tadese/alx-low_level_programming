#include<stdio.h>
#include "main.h"
/**
 *print_alphabet - a function to print alphabet lower cases.
 *@void: no parameter
 */
void print_alphabet(void)
{
char ch = 'c';
for(ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
putchar('\n');
}
