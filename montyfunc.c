#include "monty.h"

void find_funct(stack_t **head, char *token_pass, int ln)
{
	int i;

	instruction_t function_list[] =
	{
		{"push", push},
		{"pall", pall},
		{NULL, NULL}
	};

	for(i = 0; function_list[i].opcode != NULL; i++)
	{
		if (strcmp(function_list[i].opcode,token_pass)==0)
		{
			function_list[i].f(head,ln);
		}
	}
}
