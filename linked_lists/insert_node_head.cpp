#include "list.h"

Node *Insert(Node *head, int data) {
  Node *new_node = new Node{data};

  if (head != nullptr) {
    new_node->next = head;
  }
  return new_node;
}

int main() {
  Node *head = initHead();
  Insert(head, 5);
  return 0;
}