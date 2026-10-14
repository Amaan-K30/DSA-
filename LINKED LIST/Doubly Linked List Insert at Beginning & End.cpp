
// Insert at Beginning and End in Doubly Linked List

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

    // INSERT AT BEGINNING

    node* newNode = new node();

    newNode->data = 5;
    newNode->prev = NULL;
    newNode->next = head;

    head->prev = newNode;
    head = newNode;

    // INSERT AT END

    node* last = new node();

    last->data = 40;
    last->next = NULL;

    node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = last;
    last->prev = temp;

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
