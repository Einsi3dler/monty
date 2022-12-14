#include "lists.h"
void commmand_Verif(char *val)
{
	instruction_t op_built[] = 
	{
		{"push", push_func}
	};
	if (strcmp(val,op_built[0].opcode))
	{
		op_built[0].f(NULL,1);
		printf("I am at command\n");
	}
}
