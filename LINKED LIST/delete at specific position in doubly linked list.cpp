
#include<bits/stdc++.h>
using namespace std;

// creating node
struct node
{
    int data;
    node* prev;
    node* next;
};

int main()
{
    // creating new nodes
    node* first = new node();
    node* second = new node();
    node* third = new node();

    // adding data to the nodes
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // connecting nodes
    first->prev = NULL;
    first->next = second;

    second->prev = first;
    second->next = third;

    third->prev = second;
    third->next = NULL;

    node* head = first;

    // deleting at specific position
    int pos = 2;

    node* temp = head;

    for(int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;

    // printing nodes
    cout << "NULL <-> ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
