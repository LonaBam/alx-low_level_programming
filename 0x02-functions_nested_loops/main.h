#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar followed
 * by a new line
 *
 * Return: Always 0 (Success)
 */
int print_putchar(void)
{
	puts("_putchar");

	return (0);
}

/**
 * print_alphabet - Prints the alphabet
 * in lowercase
 *
 * Return: No value
 */
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
