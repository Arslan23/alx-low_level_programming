#include "main.h"

/**
*main - Print putchar
*Description: Print putchar in standard output with putchar function
*Return: Always return 0 (Success)
*/


int main(void)
{
int i;
char p[8] = "_putchar";


for (i = 0 ; i < 8; i++)
{
_putchar(p[i]);
}

_putchar('\n');


return (0);

}

