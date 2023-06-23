#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	temp = *head;
	if (temp == NULL)
		return (0);
	while (temp)
	{
		printf("%d/n", temp->n);
		temp = temp->next;
	}
}