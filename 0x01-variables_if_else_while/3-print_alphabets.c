#include <stdio.h>


/**
*main - Print alphabetic in lower case first and uppercase after
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

for (ch = 'A'; ch <= 'Z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

