#ifndef SHELL_H
#define SHELL_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void handle_env(void);
void print_command_error(const char *cmd);
int execute_command(char **args);
int execute_external_command(char **args);
char **tokenize_input(char *input);
char *get_env_variable(const char *name);
char *find_command_in_path(char *command);
void print_prompt(void);
void run_shell_loop(void);
void handle_exit(void);

extern char **environ;

#endif
