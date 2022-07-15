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
	
	// Double linked list head
	stack_t *stack_head;


	//Variables for file control
	int line_num = 1;

	//variable to store tokens
	char *token = NULL;
	char *argument = NULL;
	char *delim = " /t/n";

	FILE *read_monty; 
	
	read_monty = fopen(argv[1], "r");

	while(getline(&buffer, &buffsize, read_monty)!= -1)
	{
		token = strtok(buffer, delim);
		
		value.argument = strtok(NULL, delim);
		
		find_funct(&stackhead, token, line_num);
	}

	return 0;
}
