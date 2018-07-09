#include <stdio.h>
#include "Linked_list.h"
#define AND &&
#define OR ||
#define NOT !
/*This is  a Linked_list simulation. The linked list has (key, value) structure
-1 refers to the end of the list
*/
Node *head = NULL;
Node * current = NULL;

Node* new_Node(int data){
    Node *cur = newNode;
    cur->data = data;
    cur->next = NULL;

    return cur;
}

bool isEmpty(){
    return head == NULL;    //return true if List is isEmpty
}
bool isNodeEqual(Node* m, Node* n){
    return (m->data == n->data AND m->next == n->next);
}
void print_list(){
    Node *t = head;
    if(isEmpty())
        return;
    int c = 0;
    while(t!=NULL){
            c++;
            printf("(%d, %d)-> ", c ,t->data);
            t = t->next;
    }
    printf("(-1)\n");
}

int getLenght(){
    int c = 0;
    Node *temp = head;
    while (temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

void print_Node(Node *n){
    if(n==NULL OR isEmpty())
        return;
    int c = findKey(n);
    if(c<getLenght())
        c++;
    else
        c = -1;
    printf("(%d, next:%d)\n", n->data,c);
}
int findKey(Node *n){
    if(n == NULL OR isEmpty())
        return -1;
    Node *t  = head;
    int c = 1;
    while(NOT(isNodeEqual(t, n))){
        t = t->next;
        c++;
    }
    return c;
}
Node* findNode(int key){
    if(key<1 OR key>getLenght() OR isEmpty())
        return NULL;
    Node *t = head;
    int c = 1;
    while (c<key) {
        t = t->next;
        c++;
    }
    return t;
}

Node* insert(int key, int data){
    Node *n = new_Node(data);

    if(NOT(isEmpty())){
        Node *t = findNode(--key);
        Node *temp;
        temp = t->next;
        t->next = n;
        n->next = temp;
}
    return n;
}

Node* delete_Node(int key){
    Node *temp = NULL;
    if(isEmpty()){
        return NULL;
    }else{
        if(key==1){
            temp = head;
            head = head->next;
        }else{
            Node *n = findNode(--key);
            temp = n->next;
            n->next = n->next->next;
        }
        free(temp);
        return head;
    }
}

int main(int argc, char const *argv[]) {
    head = insert(1, 45);
    current = insert(2, 3);
    current = insert(3,30);
    current = insert(4,1);
    current = insert(5,40);
    current = insert(6,56);
    current = insert(2, 69);
    print_list();

    current = delete_Node(2);
    print_list();

    current = delete_Node(1);
    print_list();

    Node *n, *m;
    n = findNode(4);
    m = findNode(4);
    if(isNodeEqual(m, n)){
        printf("EQUAL\n");
        printf("Key: %d\n",findKey(n));
        print_Node(m);
        print_Node(m->next);
    }else{
        printf("NOT EQUAL\n");
    }
    printf("Lenght of the List :-%d\n",getLenght());
    return 0;
}
