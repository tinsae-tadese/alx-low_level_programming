#include<stdio.h>
#include<string.h>
#include "main.h"
/**
 *_strcat - a function that concatenatew strings.
 *@dest: a pointer to destination string.
 *@src: a pointer to source strig.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[li] = src[j];
}
dest[i] = '\0';
return (dest)
}
