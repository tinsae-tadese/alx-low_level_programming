#include<stdio.h>
#include "main.h"
/**
 *main - entry point of a program
 *@void: no argument
 *Return: Always 0(success)
 *print_alphabet - a function to print alphabet lower cases.
 */
void print_alphabet_x10(void)
{
char ch = 'c';
int counter = 0;
for(counter = 0; counter <= 10; counter++)
{
for(ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
