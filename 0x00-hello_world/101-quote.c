#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite("\n", sizeof(str), 1, stderr);

	return (1);
}
