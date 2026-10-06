// SEARCH INSERT POSITION

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,3,5,6,8};
    int x = 5;

    int low = 0;
    int high = 4;

    int ans = 5;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "insert position = " << ans;

    return 0;
}