
// Singly Linked List - All Operations

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
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
    first->next = second;
    second->next = third;
    third->next = NULL;

    node* head = first;

    // 1. PRINT NODES
    cout << "Print nodes: ";

    node* temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 2. INSERT AT BEGINNING
    node* newNode = new node();

    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    cout << "Insert beginning: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 3. INSERT AT END
    node* last = new node();

    last->data = 40;
    last->next = NULL;

    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = last;

    cout << "Insert end: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 4. INSERT AT SPECIFIC POSITION
    int pos = 3;

    node* middle = new node();
    middle->data = 15;

    temp = head;

    for(int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    middle->next = temp->next;
    temp->next = middle;

    cout << "Insert at position: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 5. DELETE FIRST NODE
    temp = head;
    head = head->next;
    delete temp;

    cout << "Delete first: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 6. DELETE LAST NODE
    temp = head;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;

    cout << "Delete last: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 7. DELETE AT SPECIFIC POSITION
    pos = 2;

    temp = head;

    for(int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    node* del = temp->next;
    temp->next = del->next;
    delete del;

    cout << "Delete at position: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // 8. UPDATE NODE AT SPECIFIC POSITION
    pos = 2;

    temp = head;

    for(int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    temp->data = 99;

    cout << "Update node: ";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;


    // deleting remaining nodes
    temp = head;

    while(temp != NULL)
    {
        node* del = temp;
        temp = temp->next;
        delete del;
    }

    return 0;
}
