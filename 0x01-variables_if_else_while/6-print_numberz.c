#include <stdio.h>


/**
*main - Print digit in base 10
*Description: We must printdigit in base 10
*Return: Always return 0 (Success)
*/


int main(void)
{


int n;

for (n = 0; n < 10; n++)
{
	putchar(n + '0');
}

putchar('\n');
return (0);
}

