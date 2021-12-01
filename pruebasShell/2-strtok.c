#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */
int main(void)
{
	char string[200] = "Hola, esto es una prueba";
	char *token;

/**	printf("Introduce una cadena de texto: ");
*	scanf("%s", string);
*/	token = strtok(string, " ");

	while (token)
	{
		printf("token: %s\n", token);

		token = strtok(NULL, " ");
	}
	return (0);
}
