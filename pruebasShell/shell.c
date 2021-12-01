#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 *
 *
 */
int main(void)
{
	int byte;
	char *cadena = NULL;
	size_t size = 10;
	char sep[] = "  \n";
	char **arr;
	int i = 0;

	while (1)
	{
		printf("$ ");
		byte = getline(&cadena, &size, stdin);

		if (byte == -1)
		{
			putchar('\n');
			free(cadena);
			return (-1);
		}

		arr = tokeni(cadena, sep);
		for (i = 0; arr[i] != NULL; i++)
		{
			printf("%s\n", arr[i]);
		}

		if (feof(stdin))
		{
			break;
		}
	}
	free(cadena);
	return (0);
}
