#include "main.h"

/**
 * _strchr - Entry point
 * @s: input 
 * @c: imput
 * Return: Always 0 (Sucess)
 */

char *_strchr(char *s, char c)

{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
Return (&s[i]);
}
return (0);
}
