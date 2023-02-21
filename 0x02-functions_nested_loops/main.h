#include <stdio.h>

int main(void)
{
	puts("_putchar");

	return (0);
}
void print_alphabet(void)
{
	int letter;

	letter = 'a';

	while (letter < 'z')
	{
		putchar(letter);

		letter++;
	}

	putchar('\n');

	return;
}
