#include<time.h>
#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *rev_string - a function that reverses a string.
 *@s: a pointer parameter.
 */
void rev_string(char *s)
{
int lpos;
int i, j;
char temp;
lpos = 0;
while (s[lpos] != '\0')
{
lpos++;
}
temp = 'a';
for (i = 0; i < lpos; i++)
{
for (j = i + 1; j < lpos; j++)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
}
