#include <stdio.h>
#include <string.h>


/**
*main - Print alphabetic in lower case with standard output
*Description: We must print alphabetics with lower case
*Return: Always return 0 (Success)
*/


int main(void)
{

<<<<<<< HEAD
int n;
char alphabetic[] = "abcdefghijklmnopqrstuvwxyz";

for (n = 0 ; n < 26; n++)
{
putchar(alphabetic[n]);
}
=======

char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}

>>>>>>> 73b103ae10a65da0f5a273820d32a54e20992cb3
putchar('\n');
return (0);
}

