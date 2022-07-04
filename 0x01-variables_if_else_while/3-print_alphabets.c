#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 * Description: a program that prints the alphabet in lowercase then in uppercase
 * Return - Always(0) (success) 
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);

}
