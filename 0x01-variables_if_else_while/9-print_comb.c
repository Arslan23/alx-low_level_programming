#include <stdio.h>


/**
*main - Print all combinations single digits
*Description: Print all combinations single digits
*Return: Always return 0 (Success)
*/


int main(void)
{


int ch;

for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
	if (ch == 57)
	{
		putchar(' ');
	}
	else
	{
		putchar(',');
	}
}

putchar('\n');
return (0);
}

