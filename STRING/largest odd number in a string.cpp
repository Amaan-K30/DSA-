// largest Odd number in a string

#include<bits/stdc++.h>
using namespace std;

string LargestOddNumber(string s)
{
    int i = s.length()-1;
    while(i>=0)
    {
        if((s[i]-'0')%2!=0)
        {
            break;
        }
        i--;
    }
    return s.substr(0,i+1);
}
int main ()
{
    string s = "5347";
    cout << LargestOddNumber(s);
    return 0;

}