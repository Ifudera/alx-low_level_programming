#include "main.h"
/**
 * leet - encode into the 1337speak
 * @n: input value
 * return: n value
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; j++)
	{
		for (j = 0; j < 10; J++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}

