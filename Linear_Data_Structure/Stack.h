#ifndef STACK_H
#define STACK_H
#include "Linked_list.h"
//#include <stdbool.h>
Node * push(int, Node *);
Node * pop(Node *);
void print_stack(Node*);
void print_stack_element(Node *);
void peek(Node*);
#endif
