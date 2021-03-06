#include "monty.h"

/**
 * pop - remove element from stack/queue
 * @stack: stack/queue structure
 * @line_number: line_cnt
 */

void pop(stack_t **stack, int line_number)
{
	stack_t *holder = *stack;

	if (!(*stack))
	{
		printf("L<%d>: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	else if (holder)
	{
		*stack = holder->next;
		free(holder);
	}
}
