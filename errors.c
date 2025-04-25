#include "shell.h"

/**
 * print_command_error - Prints error message for command not found
 * @cmd: The command that was not found
 *
 * Description: Formats and outputs an error message to stderr
 * Return: None
 */
void print_command_error(const char *cmd)
{
	fprintf(stderr, "./hsh: 1: %s: not found\n", cmd);
}
