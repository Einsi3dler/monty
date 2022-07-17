#include "monty.h"
void push(stack_t **stack, int number)
{
	char *arg = strtok(NULL, " /t/n");

	int num = 0;

	num = atoi(arg);
	

	//*node creation
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}

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
