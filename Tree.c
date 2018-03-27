#include <stdio.h>
#include <stdlib.h>
#define new_node (Node *)malloc(sizeof(Node))

typedef struct node{
  int x;
  struct node *left_node;
  struct node *righ_node;
} Node;

Node *root = NULL;
Node* get_node(int data){
  Node *t = new_node;
  t->x = data;
  t->left_node;
  t->righ_node;

  return t;
}
/*void insert(int x){
  Node *current;
  Node *temp = get_node(x);
  if(root==NULL){
    root = temp;
  }else{
    current= root;

    while(1){
      if(x<=current->x){
        //enter left
        if(current->left_node==NULL){
          current->left_node = temp;
            return;
        }else{
          current = current -> left_node;
        }
      }
      else{
        //go right
        if(current->righ_node == NULL){
          current->righ_node = temp;
          return;
        }
        else{
          current = current -> righ_node;
        }
      }
    }
  }
}*/
void get_min(Node *current){

  if(current->x<=current->right)
}
void insert_recur(Node *root, int data){
  current = root;
  if(current == NULL){
    current = get_node(data);
    return;
  }else if(data>current->x){
    //going right
    if(current->righ_node == NULL){
      current->right_node = get_node(data);
      return ;
    }else{
      insert_recur(current->right_node,data);
    }
  }else{
    //going left
    if (current->left_node == NULL){
      current->left_node = get_node(data);
      return;
    }else{
          insert_recur(current->left_node,data);
        }
  }
}

int main()
{

    return 0;
}
