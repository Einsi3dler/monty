#include "monty.h"
char *toke_arr[2];
void commmand_Verif(char *val)
{
	instruction_t op_built[] = 
	{
	{"push", push_func}
	};
	char *token = strtok(val, " ");
	int ind = 0;
	while(token != NULL)
	{
		if (ind == 0)
		{
			toke_arr[ind] = token;
		}
		else if (ind == 1)
		{
			toke_arr[ind] = token;
		}
		ind++;
		token = strtok(NULL, " ");
	}
	if (ind <  2)
	{
		printf("usage failed\n");

	}
	/*if (strcmp(toke_arr[0],op_built[0].opcode) == 0)
	{
		op_built[0].f(NULL,1);
		printf("%s iii %s\n",toke_arr[0], toke_arr[1]);
	}
	*/
}
