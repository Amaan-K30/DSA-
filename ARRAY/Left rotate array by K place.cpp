// left rotate array by k

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int ans[7];
    int j=0;
    int k=2;
    
    // copy element after k

    for(int i=k;i<7;i++)
    {
        ans[j]=arr[i];
        j++;
    }
    // step 2 : copy first element

    for(int i=0;i<k;i++)
    {
        ans[j]=arr[i];
        j++;
    }
    // step 3 : print answer
    for(int i=0;i<7;i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}