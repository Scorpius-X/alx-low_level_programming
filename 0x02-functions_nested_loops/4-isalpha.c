#include "main.h"
/**
* _isalpha - Shows 1 if the input is a
* lowercase character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
