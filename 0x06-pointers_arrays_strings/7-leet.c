#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int x, c;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (c = 0; c < 10; c++)
		{
			if (n[x] == s1[c])
			{
				n[x] = s2[c];
			}
		}
	}
	return (n);
}
