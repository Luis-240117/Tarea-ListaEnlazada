//Luis Francisco Garcia Aguilar 24110117

#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node

    Node(int value); // Constructor
};

#endif // NODE_H