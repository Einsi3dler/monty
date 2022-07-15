#ifndef MONTY_h
#define MONTY_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(char *value, int line_number);
} instruction_t;
/**
 *struct command_value - this holds the argument held by the oppocode
 *@argument: the argument
 *
 * Description: Holds complete arguments, accesbile from any where in the program
 */

/*
typedef struct command_value
{
	char *argument;
}value

*/

void add(char *argument, int line_number);
void minus(char *argumen, int line_number);
void find_funct(char *token_pass, char *value, int line_number);
typedef void (*op_func)(char *, int);
void call_fun(op_func, char *, int);

#endif
