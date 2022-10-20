#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string throgh malloc
 * @len: length of string
 * @next: point to next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);
int _putchar(char c);
size_t print_list(const list_t *h);


#endif
