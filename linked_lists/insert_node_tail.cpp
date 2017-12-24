#include "list.h"

Node *getTail(Node *head) {
  if (head == nullptr) {
    return nullptr;
  }

  Node *current = head;
  while (1) {
    if (current->next == nullptr) {
      return current;
    }
    current = current->next;
  }
}

Node *Insert(Node *head, int data) {
  Node *new_node = new Node{data};

  if (head == nullptr) {
    return new_node;
  } else {
    Node *tail = getTail(head);
    tail->next = new_node;
    return head;
  }
}

int main() {
  Node *head = initHead();
  Insert(head, 5);
  return 0;
}