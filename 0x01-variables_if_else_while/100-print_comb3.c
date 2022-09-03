#include <stdio.h>


/**
*main - Print all combinations two digits
*Description: Print all combinations two digits
*Return: Always return 0 (Success)
*/


int main(void)
{


int ch;
int ch2;
int tmp = 0;

for (ch = 48; ch <= 57; ch++)
{	tmp = ch;
	for (ch2 = 48;  ch2 <= 57 ; ch2++)
	{
		if (tmp < ch2)
		{
			putchar(ch);
			putchar(ch2);
			if (tmp == 56)
			{
				putchar(' ');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			
		}
	}
}
return (0);
}
