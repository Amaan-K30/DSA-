//Find the second largest element in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={23,56,43,66,65};
    int largest = arr[0];
    int secondlargest = arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    for(int i=1;i<5;i++)
    {
        if(arr[i]>secondlargest && arr[i] != largest)
        {
            secondlargest=arr[i];
        }
    }
    cout << "The second largest element is :" << secondlargest;
    return 0;
}