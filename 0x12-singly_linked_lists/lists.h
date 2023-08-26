#ifndef _LISTS_H_
#define _LISTS_H_

#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
*struct string_list - Here is our singly linked list
*@next: Our next node pointer
*@str: memory alloction string
*@len: This is our string length
*/
typedef struct string_list
{
	char *str;
	unsigned int len;
	struct string_list *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
int _putchar(char c);
size_t list_len(const list_t *h);
void free_list(list_t *head);
size_t print_list(const list_t *h);


#endif /* _LISTS_H_*/
