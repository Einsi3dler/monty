#include "monty.h"
/*
 * main- the compiler files
 * return: returns 1
 */
int main(int argc, char *argv[])
{
	stack_t *head;
	FILE *ptr;
	char val[20];
	unsigned int line_num;
	char *toke_arr[2];

	head = NULL;
	ptr = fopen("test", "r");
	line_num = 1;
	if (argc < 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE)
	}
	ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s", argv[2]);
		exit(EXIT_FAILURE);
	}
	while (fgets(val, 20, ptr) != NULL)
	{

		command_verifier(line_num, val, &head);
		line_num++;
	}
	fclose(ptr);
	return (1);
}
