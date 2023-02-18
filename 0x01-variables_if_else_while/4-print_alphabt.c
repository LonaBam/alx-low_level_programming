#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase excluding 2 letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z' && letter != 'e' || letter != 'q')
	{
		putchar(letter);
		letter = letter + 1;
	}

	putchar('\n');

	return (0);
}
