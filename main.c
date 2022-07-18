#include <stdio.h>
#include <string.h>
#include "monty.h"
#include <stdlib.h>


int main(int argc, char *argv[])
{

	char *buffer = NULL;
	size_t buffsize = 0;
	char *token = NULL;
	int line_num =1;
	FILE *read_monty;
	stack_t *stack_head;

	stack_head = NULL;

	read_monty = fopen(argv[1], "r");

	while(getline(&buffer, &buffsize, read_monty)!= -1)
	{
		token = strtok(buffer, " \t\n");
		
		
		find_funct(&stack_head, token, line_num);
	}
}
