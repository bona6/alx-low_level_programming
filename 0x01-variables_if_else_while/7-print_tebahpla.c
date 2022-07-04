#include <stdio.h>

/*
*main -> a program that prints the lowercase alphabet in reverse
*Return : always 0
*/

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}