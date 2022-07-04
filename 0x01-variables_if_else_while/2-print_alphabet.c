#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Description: a program that prints the alphabet in lower case
 * Return: Always(0) Success
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
