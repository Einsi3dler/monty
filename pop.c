#include "monty.h"

/**
 * pop - remove element from stack/queue
 * @stack: stack/queue structure
 * @line_number: line_cnt
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *holder;

	holder = *stack;
	if (!holder)
	{
		printf("L<%d>: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		free(holder);
	}
	*stack = (*stack)->next;
}
