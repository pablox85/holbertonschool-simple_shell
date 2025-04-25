#include "shell.h"

/**
 * tokenize_input - Splits input string into tokens
 * @input: The input string to tokenize
 *
 * Description: Breaks the input string into tokens using space and newline
 * as delimiters and stores them in a dynamically allocated array
 * Return: Array of string tokens, or NULL on failure
 */
char **tokenize_input(char *input)
{
	char **tokens = NULL;
	char *token;
	size_t i = 0;

	tokens = malloc(sizeof(char *) * 64);
	if (!tokens)
		return (NULL);

	token = strtok(input, " \n");
	while (token)
	{
		tokens[i++] = token;
		token = strtok(NULL, " \n");
	}
	tokens[i] = NULL;
	return (tokens);
}
