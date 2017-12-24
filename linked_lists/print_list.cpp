#include <iostream>
#include "list.h"


Node *getNext(Node *node) {
    if (node == nullptr) {
      return nullptr;
    }
    return node->next;
}

void Print(Node *head) {
  Node *current = head;

  while (current != nullptr) {
    printf("%d\n", current->data);
    current = getNext(current);
  }
}




int main() {
  Print(initHead());
  return 0;
}