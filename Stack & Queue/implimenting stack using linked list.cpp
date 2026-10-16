// implementing stack using linked list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* top = NULL;

void push(int x)
{
    node* newnode = new node();

    newnode->data = x;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    if(top == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        node* temp = top;
        top = top->next;
        delete temp;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    cout << top->data << endl;

    pop();

    cout << top->data << endl;

    return 0;
}
