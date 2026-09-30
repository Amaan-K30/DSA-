// Maximum consecutive ones 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[9]={1,1,0,1,0,1,1,1,0};
    int count = 0;
    int maxcount = 0;

    for(int i=0;i<9;i++)
    {
        if(arr[i]==1)
        {
            count ++;

        if(count>maxcount)
        {
            maxcount = count;
        }
        }
        else{
            count = 0;
        }
    }
    cout << "maximum consecutive ones =" << maxcount;
    return 0;
}
