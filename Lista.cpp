//Luis Francisco Garcia Aguilar 24110117

#include <iostream>
#include "Lista.h"
LinkedList::LinkedList() : head(nullptr) {} // Constructor

LinkedList::~LinkedList() { //Destructor
    Node* current = head;
    Node* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void LinkedList::insert(int value) { // Insercion de nuevo nodo en la lista.
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}


void LinkedList::display() { // Funcion de impresion de lista.
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << ", ";
        current = current->next;
    }
    std::cout << "Siguiente Posicion" << std::endl;
}