#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    int *arr;
    int size;
    stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }
    void push(int elemnt)
    {

        if (size - top > 1)
        {
            top++;
            arr[top] = elemnt;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {

        if (top >= 0)
        {
            cout << "poped elemt  " << arr[top] << endl;
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    void peek()
    {
        if (top >= 0 && top < size)
            cout << "Top element " << arr[top] << endl;
        else
            cout << "empty stack" << endl;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    stack s(5);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.peek();
    s.pop();
    s.pop();
    cout << s.isEmpty() << endl;

    return 0;
}