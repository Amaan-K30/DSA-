
// Search an element in singly linked list

#include<bits/stdc++.h>
using namespace std;

// creating node
struct Node
{
    int data;
    Node* next;
};

int main()
{
    // creating nodes
    Node* first = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // storing data
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // connecting nodes
    first->next = second;
    second->next = third;
    third->next = NULL;

    Node* head = first;
    Node* temp = head;

    int target = 20;

    while(temp != NULL)
    {
        if(temp->data == target)
        {
            cout << "Element found";
            return 0;
        }

        temp = temp->next;
    }

    cout << "Element not found";

    return 0;
}
