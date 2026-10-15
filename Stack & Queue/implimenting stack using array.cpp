// implimenting stack using array

#include<bits/stdc++.h>
using namespace std;

int arr[5];
int top = -1;

void push(int x)
{
    if(top==4)
    {
cout << "overflow"<<endl;
    }
    else{
        top++;
        arr[top]=x;
    }
    
}
void pop()
{
    if(top == -1)
    {
        cout << "underflow"<<endl;
    }
    else{
        top --;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);

    cout << arr[top]<<endl;
    pop();
    cout << arr[top]<<endl;
    return 0;
}