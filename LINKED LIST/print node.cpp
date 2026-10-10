// Q.no 1 Print node :-  10 -> 20 -> 30 -> NULL


 #include<bits/stdc++.h>
 using namespace std;
 
struct node
{
    int data;
    node*next;             // node skeleton
};
int main()
{
    node*first = new node();           
    node*second = new node();          // creating new node
    node*third = new node();          


    first -> data = 10;               
    second -> data = 20;              // adding data to the node
    third -> data = 30;               


    first -> next = second;
    second -> next = third;           // connecting nodes
    third -> next = NULL;

    cout << first -> data <<" " ;
    cout << second -> data<<" "  ;     // printing nodes
    cout << third -> data<< " "  ;

    return 0;
}