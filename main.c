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

	//variable to store tokens
	char *token = NULL;

	FILE *read_monty; 
	
	read_monty = fopen(argv[1], "r");

	while(getline(&buffer, &buffsize, read_monty)!= -1)
	{
		token = strtok(buffer, " /t/n");

		while (token != NULL)
		{
			printf("%s\n",token);

			token = strtok(NULL, " /t/n");
		
		}
	}

	return 0;

}
