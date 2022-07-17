#include "monty.h"

void pall(stack_t **stack, int line_number)
{
	stack_t *holder;
	(void)line_number;

	holder = *stack;
	if (holder == NULL)
	{
		printf("Stack empty");
	}
	while (holder != NULL)
	{
		printf("%d\n", holder->n);
		holder = holder->next;
	}
}
