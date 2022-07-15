#include "monty.h"
#include "stdlib.h"

/*
 * @head: pointer to stack first element
 * @temp: placeholder for new stack, if stack is not empty
 * @new_node: new stack element
 */

stack_t add_node(unsigned int n)
{
	head = NULL;

	stack_t *new_node, *temp;
	new_node = (stack_t)malloc(sizeof(stack_t);

	new_node->n = n;
	new_node->next = NULL = new_node->prev;

	if (head == NULL)
		head = temp = new_node;

	else
	{
		temp->next = new_node;
		new_node->prev = temp;
		temp = new_node;
	}
}

