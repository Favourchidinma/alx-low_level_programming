#include "main.h"
/**
 * _strlen-Finds the length of a string
 * @s:Strings pointer to the string whoose length is to be found
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int p = 0;
	/*increament up to when the last character is NULL,\0*/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
