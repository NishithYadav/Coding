#include <iostream>
using namespace std;

class Stack    
{
    int *arr;
    int size;
    int top;

public:
    Stack(int n)
    {
        size = n;
        arr = new int[size];
        top = -1;
    }

    
    bool isempty()
    {
        return (top == -1);
    }

    
    bool isfull()
    {
        return (top == size - 1);
    }

    
    void push(int value)
    {
        if (isfull())
        {
            cout << "Stack is Full" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << value << " inserted into stack." << endl;
        }
    }

  
    void pop()
    {
        if (isempty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << arr[top] << " deleted from stack." << endl;
            top--;
        }
    }


    void peek()
    {
        if (isempty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Top Element: " << arr[top] << endl;
        }
    }

   
    void display()
    {
        if (isempty())
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            cout << "Stack Elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }


    ~Stack()
    {
        delete[] arr;
    }
};

int main()
{
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}