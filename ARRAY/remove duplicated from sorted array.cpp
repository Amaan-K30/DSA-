// Remove duplicate from sorted array 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={1,1,2,2,3,3,4};
    int ans[7];
    int j=0;

    ans[j]=arr[0];
    j++;
    
    for(int i=1;i<7;i++)
    {
        if(arr[i] != arr[i-1])
        {
            ans[j]=arr[i];
            j++;
        }
    }
cout << "unique element : ";
for(int i=0;i<j;i++)
{
    cout << ans[i] << " ";
}
return 0;
}