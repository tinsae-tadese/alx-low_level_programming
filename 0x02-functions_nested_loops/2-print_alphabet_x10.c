#include<stdio.h>
#include "main.h"
/**
 *print_alphabet_x10(void) - a function that prints 10 times the alphabet in lowercase
 *@void - no argument
 */
void print_alphabet_x10(void)
{
char ch = 'c';
int counter = 0;
for(counter = 0; counter < 10; counter++)
{
for(ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
