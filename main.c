#include "lists.h"
/****
 * I am still testing out various code pieces hence it's current state,
 * leave comments if you alter
 */
void main () 
{
	instruction_t *new_node;
	new_node->opcode = "push 1";
	new_node->f = void push_func(stack_t **stack, unsigned int line_number); 
	FILE *ptr;
	char val[20];

	ptr = fopen("test", "r");

	while (fgets(val, 20, ptr) != NULL)
	{
		void commmand_Verif(char *val);
		printf("I am at main");
	}
	fclose(ptr);
}
