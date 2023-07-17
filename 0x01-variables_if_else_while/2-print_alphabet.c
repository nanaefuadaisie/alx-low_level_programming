#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase
 *
 * return: Always 0'
 */

int main(void)
{
	char letter;


	for (letter = 'a' ; letter <= 'z' ; letter++)

		putchar(letter);
	putchar('\');

	return (0);
