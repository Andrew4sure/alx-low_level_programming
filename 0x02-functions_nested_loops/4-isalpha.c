#include *main.h*
/**
 * int _isalpha - function that checks alphabetic character
 *
 * Return (1) if c is a letter
 *
 * Return 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c  >=97 & c <= 122 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar("\n");
}
