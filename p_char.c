#include "monty.h"

/**
 * f_pchar - a fun that prints the char at the top of the stack,
 * followed by a new line
 * @head: the stack head
 * @counter: theline_number
 * Return: nothing returns
*/


void f_pchar(stack_t **head, unsigned int counter)
{

	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
	
}
