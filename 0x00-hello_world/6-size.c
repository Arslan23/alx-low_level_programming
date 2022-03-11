#include <stdio.h>
/**
 * main - Prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Sizeof a long int: %li byte(s)\n", sizeof(long int));
	printf("Sizeof a long long int: %lli byte(s)\n", sizeof(long long int));
	printf("Sizeof a float: %f byte(s)\n", sizeof(float));
	return (0);
}
