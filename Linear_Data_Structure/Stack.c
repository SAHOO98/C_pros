#include "Stack.h"
int count = 0;
/*This is a Stack based on Linked List.
*This Linked List methods are available too for debugging and see whats under the hood
*/
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
void print_stack_element(Node *p) {
printf("||%d||",p->data);
}
void peek(Node *bp){
    Node *l  = findNode(count, bp);
    printf("Top element->");
    print_stack_element(l);
    printf("\n");
}
