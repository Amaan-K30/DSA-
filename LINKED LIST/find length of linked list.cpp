// Q.no 2 : find length of linked list
// 10 -> 20 -> 30 -> 40

#include<bits/stdc++.h>
using namespace std;

struct node
{
int data;
node*next;
};

int main()
{
    // creating node

node*head = new node();
node*second = new node();
node*third = new node();
node*fourth = new node ();

// storing data
head -> data = 10;
second -> data = 20;
third -> data = 30;
fourth -> data = 40;

//connecting nodes
head -> next = second;
second -> next = third;
third -> next = fourth;
fourth -> next = NULL;

//find length
int count = 0;
node*temp = head;
while (temp != NULL)
{
    count ++;
    temp = temp -> next ;
}
cout << "length = "<< count;
return 0;
}







