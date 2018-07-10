#include "Stack.h"
int count = 0;
Node * push(int data, Node *bp){
    count++;
    Node *t = insert(count , data, bp);
    //printf("%d\t%d\n",count, getLenght(bp));
    return t;
}

Node * pop(Node *bp){
    if(NOT(isEmpty(bp))){
        Node *t  = delete_Node(count--, bp);
        return t;
    }
    return NULL;
}

void print_stack(Node *bp){
    int ar[getLenght(bp)], i = 0;
    while(bp!=NULL){
        ar[i] = bp->data;
        bp = bp->next;
        i++;
    }
    i--;
    for(;i>=0;i--){
        printf("||%d||\n", ar[i]);
    }
}
