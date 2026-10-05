// upper bound 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={3,5,8,15,19};
    int x=8;
    int low = 0;
    int high = 4;

    int ans = 5;

    while(low<=high)
    {
        int mid =(low+high)/2;

        if(arr[mid]>x)
        {
            ans = mid;
            high = mid-1;
        }
        else{
            low=mid+1;
        }
    }

cout << "upper bound index = "<<ans;
return 0;

}