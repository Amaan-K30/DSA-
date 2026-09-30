// linear search element 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={10,23,45,65,34};
    int num = 65;

    for(int i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            cout<<"element  found";
        }
        
    }
    return 0;
}