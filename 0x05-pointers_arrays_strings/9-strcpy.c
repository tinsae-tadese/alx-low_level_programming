#include<time.h>
#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_strcpy - a function that copies a string from source to a destination
 *@dest: a pointer parameter
 *@src: a pointer parameter
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int j = 0;
while (src[i] != '\0')
{
dest[j] = src[i];
i++;
j++;
}
dest[j] = '\0';
return dest;
}
