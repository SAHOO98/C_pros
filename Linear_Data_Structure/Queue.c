#include "Queue.h"


Node * enqueue(int data, Node *r){
    Node *t  = insert(1, data, r);
    return t;
}

void print_queue(Node *r){
    while (r!=NULL) {
        printf("||%d||->",r->data);
        r=r->next;
    }
    printf("\n" );
}

Node * dequeue(Node *r){
    Node *t  = delete_Node(getLenght(r), r);
    return findNode(getLenght(t), t);
}
