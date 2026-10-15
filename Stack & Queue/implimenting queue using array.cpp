// implementing queue using Array

#include <bits/stdc++.h>
using namespace std;

int arr[5];
int front = 0;
int rear = -1;

void push(int x)
{
    if(rear == 4) 
    {
        cout << "Overflow" << endl;
    }
    else
    {
        rear++;
        arr[rear] = x;
    }
}

void pop()
{
    if(front > rear)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        front++;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << arr[front] << endl;

    pop();

    cout << arr[front] << endl;

    return 0;
}
