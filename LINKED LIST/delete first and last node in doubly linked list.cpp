
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

    // deleting first node
    node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;

    // deleting last node
    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;
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
