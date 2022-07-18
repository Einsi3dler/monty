#include "monty.h"
/**
 *pall - prints all the values on a stack, starting from the top
 *@stack: the stack to print values from
 *@line_number: the line number of the particular opcode instruction
 *              in the monty byte code file
 *
 *Return: void
 */
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *holder;

	holder = *stack;
	if (holder == NULL)
	{
		return;
	}
	while (holder != NULL)
	{
		printf("%d\n", holder->n);
		holder = holder->next;
	}
}
