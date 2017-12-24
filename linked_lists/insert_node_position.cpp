#include "list.h"
#include <iostream>

Node *getNext(Node *node) {
  if (node == nullptr) {
    return nullptr;
  }
  return node->next;
}

void Print(Node *head) {
  Node *current = head;

  while (current != nullptr) {
    printf("%d/", current->data);
    current = getNext(current);
  }
  printf("\n");
}

Node *InsertNth(Node *head, int data, int position) {
  Node *new_node = new Node{data};

  if (head == nullptr) {
    return new_node;
  }

  if (position == 0) {
    new_node->next = head;
    return new_node;
  }

  Node *current = head;
  int pos = 0;

  while ((pos != position - 1) && current->next != nullptr) {
    current = current->next;
    pos++;
  }

  if (current->next != nullptr) {
    new_node->next = current->next;
  }

  current->next = new_node;

  return head;
}

int main() {
  Node *head = new Node{2};

  head = InsertNth(head, 3, 0);
  Print(head);

  head = InsertNth(head, 5, 1);
  Print(head);

  head = InsertNth(head, 4, 2);
  Print(head);

  head = InsertNth(head, 2, 3);
  Print(head);

  head = InsertNth(head, 10, 1);
  Print(head);
  return 0;
}