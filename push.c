#include "monty.h"
void push(stack_t **stack, unsigned int number)
{
	int num =0, i;
	char *arg = strtok(NULL, " /t/n");
	stack_t *new_node = malloc(sizeof(stack_t));

	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", number);
		exit(EXIT_FAILURE);
	}

	for (i = 0; arg[i] != '\0'; i++)
	{
		if ((isdigit(arg[i])) == 0 && arg[i] != '-')
		{
			fprintf(stderr, "L%d: usage: push integer\n", number);
			exit(EXIT_FAILURE);
		}
	}

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	num = atoi(arg);

	new_node->n = num;

	if (*stack == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;

	}
	else
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}

	*stack = new_node;

}
