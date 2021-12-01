#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 *
 *
 */
int main(void)
{
	pid_t id; /*identificador de ID*/
	int m = 0; /*contador para while*/
	char *arr[] = {"#!usr/bin/", "ls", "-l", "/tmp", NULL};

	while (m < 5)
	{
		id = fork(); /*crea el proceso hijo*/

		if (id == 0)
		{
			execve(arr[0], arr, NULL);
			/*printf("-------------");*/
		}
		else
		{
			wait(NULL);
			/*printf("proceso padre ejecutando\n");*/
		}
			m++;
	}
	return (0);
}
