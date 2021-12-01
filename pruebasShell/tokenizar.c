#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * tokeni - tokeniza una cadena de texto
 *@cadena: texto a tokenizar
 *@sep: separador para tokenizar
 *Return: array
 */
char **tokeni(char *cadena, char *sep)
{
	int i = 0;
	char **array = NULL;
	char *token = NULL;

	array = malloc(1024);
	if (array == NULL)
	{
		return (NULL);
	}

	/*generamos el primer token*/
	token = strtok(cadena, sep);

	/*generamos los demas tokens*/
	while (token)
	{
		array[i] = token;

		token = strtok(NULL, sep);
		i++;
	}
	array[i] = NULL;
	return (array);
}
