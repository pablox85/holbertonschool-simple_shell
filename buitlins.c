#include "shell.h"

/**
 * handle_exit - Handles the exit command for the shell
 *
 * Description: Frees allocated memory and exits the shell
 * Return: None (exits process)
 */
void handle_exit(void)
{
	exit(0);
}
/**
 * handle_env - Prints all environment variables
 *
 * Description: Iterates through the environ array and prints
 *              each environment variable
 * Return: None
 */
void handle_env(void)
{
	char **env = environ;

	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
}
