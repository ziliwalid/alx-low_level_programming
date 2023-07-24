#include "main.h"
/**
* _strlen - functio,
* @s: char to check
* Description: this will return the length of a string
* Return: length of the string
*/
int _strlen(char *s)
{
	int l = 0;

	for (; *s++;)
		l++;
	return (l);
}
