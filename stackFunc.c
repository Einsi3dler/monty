#include "monty.h"


/**
 * push - push a new data to the stack
 * @number: variable for CL data
 * @stack: A double linkedlist data
*/

void push(stack_t **stack, int number)
{

	char *arg = strtok(NULL,"/t/n");
	
	int num = 0;

	num = atoi(arg);
//*stack have initial @prev & @next
	stack_t *new_node = (stack_t)malloc(sizeof(stack_t));

//if statement for non value pass to stack or underflow
	if (new_node == 0)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}

	new_node->n = num;

	new_node->prev = 0;
	new_node->next = new_node;

//if statement for empty stack, then function will pass  new data
	if (*stack != 0)
		(*stack)->prev = new_node;
	*stack = new_node;


	printf("%d", new_node->n);
}
