// Find the largest element in an array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 34, 56, 76, 45};

    int max = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "The Largest Element is : " << max;

    return 0;
}