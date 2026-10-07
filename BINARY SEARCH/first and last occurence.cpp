// first and last occurence 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,2,2,2,3,4,5};

int target = 2;
int low = 0;
int high = 6;

int ans = -1;

while(low<=high)
{
    int mid = (low+high)/2;

    if(arr[mid]==target)
    {
    ans=mid;
    low = mid+1;
    }
    else if(arr[mid]<target)
    {
        low=mid+1;
    }
    else{
        high = mid-1;
    }
}
cout << "last occurence index = "<<ans;
return 0;

}