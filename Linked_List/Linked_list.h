#ifndef  LINKED_LIST_H
#define LINKED_LIST_H

#include <malloc.h>
#include <stdbool.h>
#define newNode (Node *)malloc(sizeof(Node))

typedef struct _{
    int data;
    struct _ *next;
}Node;

//Functions for List operations
Node* insert(int, int);
Node* findNode(int);
int findKey(Node*);
int getLenght();
void print_list();
void print_Node(Node *);
bool isEmpty();
bool isNodeEqual(Node*, Node*);
Node* new_Node(int);
Node* delete_Node(int);
#endif
