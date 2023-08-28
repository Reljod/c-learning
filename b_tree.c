/*
Create a binary tree traversal algorithm.

    1
  2   3
 4 5  6 7

1 -> 2 -> 4 -> 5 -> 3 -> 6 -> 7
*/

#include <stdio.h>

typedef struct Node node;
typedef void (*f)(node*);

node create_node(int, node*, node*);
void traverse_node(node*, f);
void print_node(node*);

struct Node {
  int value;
  node* left;
  node* right;
};

int main() {
  int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  node n4 = create_node(values[3], NULL, NULL);
  node n5 = create_node(values[4], NULL, NULL);
  node n6 = create_node(values[5], NULL, NULL);
  node n7 = create_node(values[6], NULL, NULL);
  node n2 = create_node(values[1], &n4, &n5);
  node n3 = create_node(values[2], &n6, &n7);
  node n1 = create_node(values[0], &n2, &n3); // head

  f ptr_print_node = &print_node;

  traverse_node(&n1, ptr_print_node);

  return 0;
}

node create_node(int value, node* left, node* right){
  node n;
  n.value = value;
  n.left = left;
  n.right = right;
  return n;
}

void traverse_node(node* n, f func){
  func(n);
  if(n->left != NULL) {
    traverse_node(n->left, func);
  } 

  if (n->right != NULL) {
    traverse_node(n->right, func);
  }
}

void print_node(node* n){
  printf("Node: %d\n", n->value);
}