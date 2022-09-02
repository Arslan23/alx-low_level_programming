#include <stdio.h>


/**
*main - Print alphabetic in lower case in  reverse
*Description: We must print alphabetics in reverse
*Return: Always return 0 (Success)
*/


int main(void)
{


char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}

putchar('\n');
return (0);
}

