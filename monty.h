#ifndef LISTS_H
#define LISTS_H
#define  _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/**
 *Struct Definitions
 */

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
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/*
 *monty functions
 */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void command_verifier(unsigned int line_num, char *line, stack_t **stack);
/*
 *utillity functions
 */
int delete_dnodeint_at_index(stack_t **head, unsigned int index);
char *parse_line(char *line);
stack_t *add_dnodeint(stack_t **head, const int n);
int isnumber(char *str);
void error_exit(stack_t **stack);
void free_dlistint(stack_t *head);
typedef void (*instruct_func)(stack_t **stack, unsigned int line_number);
instruct_func get_func(char *str);
#endif /*LISTS_H*/
