#include "monty.h"
/*
 * main- the compiler files
 * return: returns 1
 */
int main(int argc, char *argv[])
{
	stack_t *head;
	FILE *ptr;
	char *buffer;
	char *line;
	unsigned int line_num;
	int read;

	size_t i = 0;
	head = NULL;
	ptr = fopen("test", "r");
	line_num = 1;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((read = getline(&buffer, &i, ptr)) != -1)
	{
		line = parse_line(buffer);
		if (line == NULL || line[0] == '#')
		{
			line_num++;
			continue;
		}
		command_verifier(line_num, line, &head);
		line_num++;
	}
	free_dlistint(head);
	free(buffer);
	fclose(ptr);
	return (0);
}
