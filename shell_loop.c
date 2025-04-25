#include "shell.h"

/**
 * run_shell_loop - Main loop for the shell program
 *
 * Description: Continuously reads input from the user, processes it,
 * and executes the appropriate commands until exit
 * Return: None
 */
void run_shell_loop(void)
{
	char *input = NULL;
	size_t len = 0;
	ssize_t read;
	char **args;
	int is_interactive = isatty(STDIN_FILENO);
	int last_status = 0;

	while (1)
	{
		if (is_interactive)
			print_prompt();

		read = getline(&input, &len, stdin);
		if (read == -1)
		{
			if (is_interactive) 
				printf("\n");
			break;
		}

		args = tokenize_input(input);
		if (!args || !args[0])
		{
			free(args);
			continue;
		}

		if (strcmp(args[0], "exit") == 0)
		{
			free(args);
			free(input);
			exit(last_status);
		}

		last_status = execute_command(args);
		free(args);
	}

	free(input);
}
