#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
/* declaration of char c */
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}

/**
 * _isupper - check if character is uppercase
 *
 * Param - c
 *
 * Return: 1 or 0.
 */
int _isupper(char c)
{
/* c is the character the program checks against */
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
