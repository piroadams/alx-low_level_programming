#include "main.h"
/**
 * main - Entry 
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char name[] = "Adamson";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
