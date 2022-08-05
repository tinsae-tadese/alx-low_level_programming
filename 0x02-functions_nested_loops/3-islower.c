#include<stdio.h>
#include "main.h"
/**
  *_islower - a function that checks if a char is in its lower case.
  *@int c: takes one char as a parameter.
  *Return: 1 if a char is in lowercase and 0 otherwise
  */
int _islower(int c)
{
int flag = 0;
if (c >= 97 && c <= 127)
{
flag = 1;
}
return (flag);
}
