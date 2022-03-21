#include "main.h"

/**
 * _strlen - Return length of string
 * @s: param
 * Return: return length of @s
 */


int _strlen(char *s)
{
int i = 0;

do {
i++;
} while (s[i] !=  '\0');

return i;
}












