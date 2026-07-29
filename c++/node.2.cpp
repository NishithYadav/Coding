#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();

    
    n1->data = 1000;
    n2->data = 2000;
    n3->data = 3000;
    n4->data = 4000;

   
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n1;  


    Node* current = n1;
    do {
        cout << current->data << " -> ";
        current = current->next;
    } while (current != n1);
    
    cout << "(back to " << n1->data << ")" << endl;

    return 0;
}