//Luis Francisco Garcia Aguilar 24110117

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Nodo.h"

class LinkedList {
private:
    Node* head; // Puntero al incio de la lista.

public:
    LinkedList(); // Constructor
    ~LinkedList(); // Destructor

    void insert(int value); // Insercion de nuevo nodo.
    void display(); // Imprimir
};

#endif