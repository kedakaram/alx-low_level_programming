#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all all alphabet letters
 *
 * Return: Always 0 (Succsess)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
