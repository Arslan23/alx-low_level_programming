#include <stdio.h>
#include <string.h>

/**
*main - Print alphabetic in lower case with standard output
*Description: We must print alphabetics with lower case
*Return: Always return 0 (Success)
*/


int main(void)
{

int n;
char alphabetic[] = "abcdefghijklmnopqrstuvwxyz";

for (n = 0 ; n < 26; n++)
{
putchar(alphabetic[n]);
}
putchar('\n');
return (0);

}

