#include "monty.h"

void find_func(stack_t **head, char *token_pass, int ln)
{
	int i;

	instruction_t function_list[] =
	{
		{"pall", print},
		{"push", push},
		{NULL, NULL}
	}

	for(i = 0; function_list[i].opcode != NULL; i++;)
	{
		if (strcmp(function_list[i].opcode,token_pass)==0)
		{
			function_list[i].f(head,ln);
		}
	}
}
