#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {1, 0, 2, 0, 3, 4, 0};

    int ans[7];

    int j = 0;

    for(int i = 0; i < 7; i++)
    {
        if(arr[i] != 0)
        {
            ans[j] = arr[i];
            j++;
        }       
    }

    while(j < 7)
    {
        ans[j] = 0;
        j++;
    }

    for(int i = 0; i < 7; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

