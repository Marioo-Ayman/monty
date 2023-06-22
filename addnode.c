#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL )
	{
		printf("error");
		exit(0);
	}
	if (*head)
		*head->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
