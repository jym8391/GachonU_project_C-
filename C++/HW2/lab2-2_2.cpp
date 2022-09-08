#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;//string이 아니라 char s[6]={}; 이런식으로 처리해도 된다. 문자열을 이용해 5자리 문자를 입력받고 
    //앞뒤 문자를 비교하여 같은지 틀린지 비교하여 팰린드롬을 판정한다.
    cout<<"Enter a five-digit number: ";
    cin>>s;
    if((s[0]==s[4]&&(s[1]==s[3]))) cout<<s<<" is a palindrome"<<endl;
    else cout<<s<<" is not a palindrome"<<endl;
    return 0;
} 