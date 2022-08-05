#include<stdio.h>
#include "main.h"
/**
  *int _abs(int n) - a function that prints absolute value of a given number
  *@n: takes one char as a parameter.
  *Return: Absolute value of a given number
  */
int _abs(int n)
{
int av = 0;
if (n > 0)
{
av = n;
}
else if (n < 0)
{
av = -1 * n;
}
else
{
av = av;
}
return (av);
}
