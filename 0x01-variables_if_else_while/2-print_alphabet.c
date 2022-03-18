#include <stdio.h>

/**
*main - Print alphabetic in lower case with standard output
*Description: We must print alphabetics with lower case
*Return: Always return 0 (Success)
*/


int main(void)
{

int n;
char alpahabetic[] = "abcdefghijklmnopqrstuvwxyz";

for (n = 0 ; n < sizeof(alpahabetic); n++)
{
putchar(alpahabetic[n]);
putchar("\n");
}

return (0);

}

