#include <stdio.h>

int main(void)
{
	int let;
	
	let = '_';
	putchar(let);

	let = 'p';
	putchar(let);

	let = 'u';
	putchar(let);

	let = 't';
	putchar(let);

	let = 'c';
	putchar(let);

	let = 'h';
	putchar(let);

	let = 'a';
	putchar(let);

	let = 'r';
	putchar(let);

	putchar('\n');

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
