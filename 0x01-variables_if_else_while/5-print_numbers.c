#include <stdio.h>


/**
*main - Print all single digits of decimal base
*Description: Print all signle digits of decimal base
*Return: Always return 0 (Success)
*/


int main(void)
{


char ch;

for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}

putchar('\n');
return (0);
}

