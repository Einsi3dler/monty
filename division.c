#include "monty.h"

/**
 * division - entry point
 * @stack: stack_t variable
 * @line_number: unsigned int variable
 */

void division(stack_t **stack, unsigned int line_number)
{
	int divide;

	if ((*stack == NULL) || ((*stack)->next == NULL && (*stack)->prev == NULL))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	divide = (*stack)->next->n / (*stack)->n;

	pop(stack, 0);
	pop(stack, 0);
	push(stack, divide);
}
