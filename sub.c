#include "monty.h"

/**
 * sub - entry point
 * @stack: stack_t variable
 * @line_number: unsigned int variable
*/

void sub(stack_t **stack, int line_number)
{
	int res;

	if ((*stack == NULL) || ((*stack)->next == NULL && (*stack)->prev == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	res = (*stack)->next->n - (*stack)->n;

	pop(stack, 0);
	pop(stack, 0);
	push(stack, res);
}
