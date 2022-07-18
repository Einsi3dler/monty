#include "monty.h"

/**
 * find_funct - carries certain arguments to help find the right function
 *@head: the head address of the stack
 *@token_pass: string containing the token argunment
 *@ln: contains the line number
 *
 *Return: void
 */

void find_funct(stack_t **head, char *token_pass, unsigned int ln)
{
	int i;

	instruction_t function_list[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pall},
		{NULL, NULL}
	};

	for (i = 0; function_list[i].opcode != NULL; i++)
	{
		if (strcmp(function_list[i].opcode, token_pass) == 0)
		{
			function_list[i].f(head, ln);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, token_pass);
	exit(EXIT_FAILURE);
}

