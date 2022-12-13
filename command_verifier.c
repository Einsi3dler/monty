#include "lists.h"
void commmand_Verif(char *val)
{
	stack_t *node;
	node = NULL;
	if (val == instruction_t[0].opcode)
	{
		instruction_t[0].f(node,1);
	}
	printf("file set");
}
