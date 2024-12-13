//Luis Francisco Garcia Aguilar 24110117

#include <iostream>
#include "Lista.h"

int main() {
    LinkedList list;

    list.insert(10); // Valores Random
    list.insert(20);
    list.insert(30);

    std::cout << "Lista Enlazada: "; // Imprimir la lista en chava.
    list.display();

    return 0;
}