// searching algorith 
// Q.no.1 array = {10,20,30,40,50,60,70}
// Target = 60

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[7]={10,20,30,40,50,60,70};
    int target = 60;
    int low = 0;
    int high = 6;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
            cout << "element found at inndex " << mid ;
            return 0;
        }
    
        else if(target < arr[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
        cout << "element not found";
        return 0;
    
}