#include <stdio.h>
#include <string.h>


/**
*main - Print all the number of base 16
*Description: We must print all number of base 16
*Return: Always return 0 (Success)
*/


int main(void)
{


char base16[] = "0123456789abcdef";
int n;

for (n = 0; n < 16; n++)
{
	putchar(base16[n]);
}

putchar('\n');
return (0);
}

