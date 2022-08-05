#include<stdio.h>
#include "main.h"
/**
  *print_sign - a function that prints the sign of a number.
  *@int n: takes one char as a parameter.
  *Return: 1 and print +  if n is positive, 0 and print 0 if zero, -1 and - if n is negative. 
  */
int print_sign(int n)
{
int flag = 0;
if (n > 0)
{
flag = 1;
_putchar('+');
}
else if (n < 0)
{
flag = -1;
_putchar('-');
}
else
{
_putchar('0');
}
return (flag);
}
