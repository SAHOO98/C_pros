#ifndef  LINKED_LIST_H
#define LINKED_LIST_H

#include <malloc.h>
#include <stdbool.h>

#define AND &&
#define OR ||
#define NOT !

#define newNode (Node *)malloc(sizeof(Node))

typedef struct _{
    int data;
    struct _ *next;
}Node;

//Functions for List operations
Node* insert(int, int, Node *);
Node* findNode(int, Node *);
int findKey(Node*, Node *);
int getLenght(Node *);
void print_list(Node *);
void print_Node(Node *, Node *);
bool isEmpty(Node *);
bool isNodeEqual(Node*, Node*);
Node* new_Node(int);
Node* delete_Node(int, Node *);
#endif
