#include "main.h"

/**
* print_alphabet_x10 - Print the alphabets 10 times
* Description: Print alphabet
* Return: Always return 0 (Success)
*/


void print_alphabet_x10(void)
{
int i;
int y;
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

for (i = 0; i < 10; i++)
{

for (y  =  0; y <= 25 ; y++)
{
_putchar(alphabet[y]);
}
_putchar('\n');
}
}







