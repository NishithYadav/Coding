#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* create(int data) {
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node* insertMid(Node* head, int data) {
    if (!head) return create(data);

    Node *slow = head, *fast = head;
    Node *prev = NULL;

    while (fast && fast->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    Node* temp = create(data);

    if (!prev) {
        temp->next = head;
        return temp;
    }

    prev->next = temp;
    temp->next = slow;

    return head;
}

void print(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = NULL;

    head = create(1);
    head->next = create(2);
    head->next->next = create(3);
    head->next->next->next = create(4);

    head = insertMid(head, 99);

    print(head);

    return 0;
}
