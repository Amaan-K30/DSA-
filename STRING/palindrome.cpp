// palindrome program :

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "madam";

    int left = 0;
    int right = s.length()-1;

while(left<right)
{
    if(s[left]!=s[right])
    {
        cout << "not palindrome";
return 0;

    }

left ++;
right--;
}
cout <<  "palindrome";
}