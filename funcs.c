#include "monty.h"

void add(char *argument , int line_number)
{
	int value;

	value =atoi(argument);

	value = value * value;


	printf("%d\n", value);
}

void minus(char *argument, int line_number)
{
	int value;

	value = atoi(argument);

	value = value / value;

	printf("%d\n", value);
}
