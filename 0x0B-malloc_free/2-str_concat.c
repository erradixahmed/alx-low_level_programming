#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to a newly allocated space in memory which contains the
 * concatenated string. Returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0, j = 0;
	char *conStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	conStr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (conStr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		conStr[i] = s1[i];

	j = len2;
	for (len2 = 0; len2 <= j; i++, len2++)
		conStr[i] = s2[len2];

	return (conStr);
}
