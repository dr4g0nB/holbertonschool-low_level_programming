#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Length of a string.
 * @s: pointer.
 * Return: len.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * add_node - Adds a new node at the beginning.
 * @head: double pointer.
 * @str: string.
 * Return: address of new element or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *pretty_node;
	char *cstr;

	pretty_node = malloc(sizeof(list_t));
	if (pretty_node == NULL)
	{
		return (NULL);
	}
	
	cstr = strdup(str);
	if (cstr == NULL)
	{
		free(pretty_node);
		return(NULL);
	}

	pretty_node->str = cstr;
	pretty_node->len = _strlen(cstr);
	pretty_node->next = *head;
	*head = pretty_node;

	return(pretty_node);

}
