#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_getenv - funcion getenv
 *@name: nombre de la variable de entorno "path"
 *return: contenido de la variable de entrono
 *
 */
char *_getenv(const char *name, char **environment)
{
	char *buff = NULL;
	char **path = NULL;
	char *str = NULL;
	char **carpetas; /*array para guardar carpetas del path*/
	int i = 0;

	char *dobstr = strdup(name);
	/*name = "PATH=";*/

	while (environment[i] != NULL)
	{

		buff = strstr(environment[i], dobstr);
		path = tokeni(buff, "=");
		str = path[1];
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		carpetas = tokeni(str, ":");
	}
	return (*carpetas);
}
