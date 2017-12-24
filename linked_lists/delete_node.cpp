#include "list.h"

Node *Delete(Node *head, int position) {
  Node *current = head;

  if (head == nullptr) {
    return nullptr;
  }

  if (position == 0) {
    head = head->next;
  }

  int pos = 0;

  while ((pos != position - 1) && current->next != nullptr) {
    current = current->next;
    pos++;
  }

  if (current->next != nullptr) {
    if (current->next->next == nullptr) {
      current->next = nullptr;
    } else {
      current->next = current->next->next;
    }
  }

  return head;
}

int main() {
  Node *head = initHead();
  head = Delete(head, 1);
}
