#include "monty.h"
/**
 * stderr_unknown- this returns an error for the unknown command
 * @token: failled command
 * @line_number: line number of instruction
 * Return: Exit failure
 */
void stderr_unknown(char *token, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token);
	exit(EXIT_FAILURE);
}
