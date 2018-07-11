#include "Stack.h"
#include "Queue.h"

int main(int argc, char const *argv[]) {
    printf("\n\nLinked_list testing\n");
    printf("=======================\n" );
    Node *head = NULL;
    //Node *current = NULL;
    head = insert(1, 45, head);
    head = insert(2, 3, head);
    head = insert(3, 30, head);
    head = insert(4, 1, head);
    head = insert(5, 40, head);
    head = insert(6, 56, head);
    head = insert(2, 69, head);
    head = insert(getLenght(head)+1, 76, head);

    print_list(head);

    head = delete_Node(2, head);
    print_list(head);

    head = delete_Node(1, head);
    head = insert(getLenght(head)+1, 456, head);
    print_list(head);


    Node *n, *m;
    n = findNode(4, head);
    m = findNode(4, head);
    if(isNodeEqual(m, n)){
        printf("EQUAL\n");
        printf("Key: %d\n",findKey(n, head));
        print_Node(m, head);
        print_Node(m->next, head);
    }else{
        printf("NOT EQUAL\n");
    }
    printf("Lenght of the List :-%d\n",getLenght(head));

    printf("\n\nStack testing\n");
    printf("=================\n");
    Node * bp = NULL;
    bp = push(23, bp);
    bp = push(34, bp);
    bp = push(34, bp);
    bp = push(34, bp);
    print_list(bp);
    print_Node(bp, bp);
    bp = pop(bp);
    print_stack(bp);
    peek(bp);

    printf("\n\nQueue testing\n" );
    printf("=================\n");
    Node *rear = NULL, *front = NULL;

    rear = enqueue(23, rear);
    rear = enqueue(233, rear);
    rear = enqueue(2543, rear);
    rear = enqueue(3444, rear);
    rear = enqueue(876, rear);
    print_queue(rear);

    front = dequeue(rear);
    //front = dequeue(rear);

    print_queue(rear);

    rear  = enqueue(69, rear);

    print_queue(rear);

    return 0;
}
