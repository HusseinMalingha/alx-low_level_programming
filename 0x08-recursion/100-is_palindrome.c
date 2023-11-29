#include "main.h"
#include <string.h>
/**
 * is_palindrome_recursive - Helper function to check if a substring is a
 * palindrome recursively.  @s: The string to be checked.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1); /* substring is a palindrome */

	if (s[start] != s[end])
		return (0);  /* Not a palindrome */

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome using recursion.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
