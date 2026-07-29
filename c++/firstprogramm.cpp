#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    bool isempty()
    {
        return (top == NULL);
    }

    void push(int value)
    {
        Node *newNode = new Node(value);

        if (newNode == NULL)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            newNode->next = top;
            top = newNode;

            cout << value << " inserted into stack." << endl;
        }
    }
};

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    return 0;
}