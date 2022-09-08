#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a five-digit number: ";
    cin>>s;
    if((s[0]==s[4]&&(s[1]==s[3]))) cout<<s<<" is a palindrome"<<endl;
    else cout<<s<<" is not a palindrome"<<endl;
    return 0;
} 