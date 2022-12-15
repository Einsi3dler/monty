#include "monty.h"
/**
 * push_func- pushes lol
 * @stack: contains the pointer pointing to the pointer
 * @line_number: contains the line number
 */
void push_func(stack_t **stack, unsigned int line_number)
{
	*stack = NULL;
	printf("I was here at push %d\n", line_number);
	printf("I am singing from push%s\n", toke_arr[1]);
}
