#include <stdio.h>


/**
*main - Print alphabetic except q and e
*Description: We must print alphabetics except q and e
*Return: Always return 0 (Success)
*/


int main(void)
{


char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
}

putchar('\n');
return (0);
}

