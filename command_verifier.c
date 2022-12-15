#include "monty.h"
/**
 * command_verifier - this verrifies the passed command
 * @line_num: this is the line number for the command
 * @val: this is the string token
 * @head: pointer to the pointer of the stack head
 * Return: void
 */
void command_verifier(unsigned int line_num, char *val, stack_t **head)
{
	instruction_t op_com[] = {
	{"push", push_func}
	};
	int i, check = 0;
	char *token = strtok(val, " ");
	int ind = 0;

	while (token != NULL)
	{
		if (ind == 0)
		{
			toke_arr[ind] = token;
		}
		else if (ind == 1)
		{
			toke_arr[ind] = token;
		}
		ind++;
		token = strtok(NULL, " ");
	}
	for (i = 0; op_com[i].opcode; i++)
	{
		if (strcmp(toke_arr[i], op_built[i].opcode) == 0)
		{
			check = 1;
			op_built[0].f(head, line_num);
			break;
		}
	}
	if (check == 1)
	{
		fprintf(stderr, "L%d: unknown instruction %s", line_num, toke_arr[1]);
		exit(EXIT_FAILURE);
	}
}
