struct Node
  {
     int data;
     struct Node *next;
};


Node *initHead() {
  Node *n1 = new Node{1};
  Node *n2 = new Node{2};
  Node *n3 = new Node{3};

  n1->next = n2;
  n2->next = n3;
  return n1;
}