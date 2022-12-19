#include "lists.h"

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	temp = *head;
	if (!temp)
		return;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
