#include "monty.h"
#include "stdlib.h"

/*
 * @head: pointer to stack first element
 * @temp: placeholder for new stack, if stack is not empty
 * @new_node: new stack element
 */

stack_t add_node_stack(void)
{
	stack_t *temp = NULL;
	stack_t *head = element->head;

	temp = malloc(sizeof(stack_t));
	if (temp == NULL)
		return (NULL);
	temp->next = (head == NULL) ? NULL : head;
	temp->prev = NULL;
	if (head)
		head->prev = temp;
	element->head = temp;
	return (temp);
}

