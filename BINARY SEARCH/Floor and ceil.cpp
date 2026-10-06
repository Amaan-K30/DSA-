// floor and ceil

// [floor <= Target]
// [ceil >= Target]

#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[5]={3,5,8,15,19};
int x=9;

int low = 0;
int high = 4;

int floor = -1;
int ceil = -1;

while(low <= high)
{
    int mid = (low + high)/2;
    if(arr[mid]==x)
    {
    floor = arr[mid];
    ceil = arr[mid];
    break;
    }
    else if(arr[mid]<x)
    {
        floor = arr[mid];
        low = mid+1;
    }
    else
    {
        ceil = arr[mid];
        high = mid-1;
    }
}
cout << "floor"<<floor<<endl;
cout << "ceil"<<ceil<<endl;

}
