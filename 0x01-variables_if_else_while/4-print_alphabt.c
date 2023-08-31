#include <stdio.h>
#include <ctype.h>

/**
 *  main - prints the alphabet in lowercase except e and q
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
			putchar(alphabet[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
