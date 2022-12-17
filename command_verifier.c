#include "monty.h"
/**
 * command_verifier - this verrifies the passed command
 * @line_num: this is the line number for the command
 * @val: this is the string token
 * @head: pointer to the pointer of the stack head
 * Return: void
 */
void command_verifier(unsigned int line_num, char *line, stack_t **stack)
{
	instruct_func s;

	s = get_func(line);
	if (s == NULL)
	{
		printf("L%u: unknown instruction %s", line_num, toke_arr[0]);
		exit(EXIT_FAILURE);
	}
	s(stack, line_num);
}
/**
 * get_func - checks opcode and returns a function
 * @str: the opcode
 *
 * Return: returns a function, or NULL on failure
 */
instruct_func get_func(char *str)
{
	int i;
	instruction_t instruct[] = {
		{"push", push},
		{"pall", pall},
		{NULL, NULL},
	};

	i = 0;
	while (instruct[i].f != NULL && strcmp(instruct[i].opcode, str) != 0)
	{
		i++;
	}

	return (instruct[i].f);
}
