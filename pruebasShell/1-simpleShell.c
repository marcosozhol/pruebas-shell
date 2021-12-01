#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *
 *
 */
int main(void)
{
	int byte;
	char *cadena = NULL;
	size_t size = 10;

	while (1)
	{
		printf("$ ");
		byte = getline(&cadena, &size, stdin);

		if (byte == -1)
		{
			putchar('\n');
			return (-1);
		}
		if (feof(stdin))
		{
			break;
		}
	}
	free(cadena);
	return (0);
}
