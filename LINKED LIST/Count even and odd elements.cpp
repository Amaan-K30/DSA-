
// Count even and odd elements

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
    Node* fourth = new Node;

    // storing data
    first->data = 10;
    second->data = 15;
    third->data = 20;
    fourth->data = 25;

    // connecting nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    Node* head = first;
    Node* temp = head;

    int even = 0;
    int odd = 0;

    while(temp != NULL)
    {
        if(temp->data % 2 == 0)
            even++;
        else
            odd++;

        temp = temp->next;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd;

    return 0;
}
