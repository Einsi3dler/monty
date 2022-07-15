#include <stdio.h>
#include <string.h>
#include "monty.h"
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char **argv)
{
	//Declearation of getline variables
	char *buffer = NULL;
	size_t buffsize = 0;
	size_t characters;

	//Variables for file control
	unsigned int line_num = 1;

	//variable to store tokens
	char *token = NULL;
	char *argument = NULL;
	char *delim = " /t/n"

	FILE *read_monty; 
	
	read_monty = fopen(argv[1], "r");

	while(getline(&buffer, &buffsize, read_monty)!= -1)
	{
		token = strtok(buffer, delim);
		//arg.value = strtok(NULL, " /t/n");
		argument = strtok(NULL, delim)

		find_funct(token, argument, line_num);
	}

	return 0;
}


void find_funct(char *token_pass, char *value,  int line_number)
{
	int i;

	instruction_t func_list[] = {
		{"hello", add},
		{"world", minus}.
		{NULL, NULL}
	};
	for (i = 0; func_list[i].opcode != NULL; i++)
	{
		if (strcmp(token_pass, func_list[i].opcode) == 0)
		{
			func_list[i].f(argument, line_number);
		}
	}
}
