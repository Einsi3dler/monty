#include <stdio.h>
#include <string.h>
#include "monty.h"
#include <stdlib.h>


int main(int argc, char *argv[])
{

	char *buffer = NULL;
	size_t buffsize = 0;
	char *token = NULL;
	unsigned int line_num =1;
	FILE *Rfile;
	stack_t *stack_head;

	stack_head = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	Rfile = fopen(argv[1], "r");
	if (!Rfile)
	{
		fprintf(stderr,"Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}	

	while(getline(&buffer, &buffsize, Rfile)!= -1)
	{
		if (*buffer == '\n')
		{
			line_num++;
			continue;
		}
		token = strtok(buffer, " \t\n");
		if (!token)
		{
			line_num++;
			continue;
		}
		find_funct(&stack_head, token, line_num);
		line_num++;
	}
	free(buffer);
	fclose(Rfile);
	exit(EXIT_SUCCESS);
}
