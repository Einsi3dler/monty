#include "monty.h"
#include <stdbool.h>


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
	stack_t *new_node = malloc(sizeof(stack_t));

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


	printf("%d\n", new_node->n);
}



void pall(stack_t **stack, unsigned int line_number)
{
    bool true;
    stack_t *holder;
    (void)line_number;

    holder = *stack;
    if (holder == NULL)
        return (NULL);

    while (holder == true)
    {
        printf("%d\n", holder->n);
        holder = holder->next;
    }
}
