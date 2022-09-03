#include <stdio.h>
#include <string.h>


/**
*main - Print alphabetic in lower case with standard output
*Description: We must print alphabetics with lower case
*Return: Always return 0 (Success)
*/


int main(void)
{


char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}

putchar('\n');
return (0);
}

