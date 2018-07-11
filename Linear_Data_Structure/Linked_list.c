#include <stdio.h>
#include "Linked_list.h"

/*This is  a Linked_list simulation. The linked list has (key, value) structure
*-1 refers to the end of the list
*
*/
//Node *head = NULL;
//Node * current = NULL;

Node* new_Node(int data){
    Node *cur = newNode;
    cur->data = data;
    cur->next = NULL;

    return cur;
}

bool isEmpty(Node *head){
    return head == NULL;    //return true if List is isEmpty
}
bool isNodeEqual(Node* m, Node* n){
    return (m->data == n->data AND m->next == n->next);
}
void print_list(Node *head){
    Node *t = head;
    if(isEmpty(head))
        return;
    int c = 0;
    while(t!=NULL){
            c++;
            printf("(%d, %d)-> ", c ,t->data);
            t = t->next;
    }
    printf("(-1)\n");
}

int getLenght(Node *head){
    int c = 0;
    Node *temp = head;
    while (temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

void print_Node(Node *n, Node *head){
    if(n==NULL OR isEmpty(head))
        return;
    int c = findKey(n, head);
    if(c<getLenght(head))
        c++;
    else
        c = -1;
    printf("(%d, next:%d) \n", n->data,c);
}
int findKey(Node *n, Node *head){
    if(n == NULL OR isEmpty(head))
        return -1;
    Node *t  = head;
    int c = 1;
    while(NOT(isNodeEqual(t, n))){
        t = t->next;
        c++;
    }
    return c;
}
Node* findNode(int key, Node *head){
    if(key<1 OR key>getLenght(head) OR isEmpty(head))
        return NULL;
    Node *t = head;
    int c = 1;
    while (c<key) {
        t = t->next;
        c++;
    }
    return t;
}

Node* insert(int key, int data, Node *head){
    Node *n = new_Node(data);

    if(NOT(isEmpty(head))){
            if(key == 1){
                n->next = head;
                head = n;
            }else{
                Node *t = findNode(--key, head);
                Node *temp;
                temp = t->next;
                t->next = n;
                n->next = temp;
            }

    }else{
        head = n;
    }
    return head;
}

Node* delete_Node(int key, Node * head){
    Node *temp = NULL;
    if(isEmpty(head)){
        return NULL;
    }else{
        if(key==1){
            temp = head;
            head = head->next;
        }else {
            Node *n = findNode(--key, head);

            if (key == getLenght(head)){
                n->next = NULL;
            }else{
                temp = n->next;
                n->next = temp->next;
            }
        }
        free(temp);
        return head;
    }
}
