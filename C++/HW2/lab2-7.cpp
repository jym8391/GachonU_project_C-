#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size())//length is different.
    {
        cout<<"No anagram";
        return 0;
    }
    for(int i=0;i<s1.size();i++)/*tolower s1,s2 코드의 간략화를 위해 함수를 사용했지만,
    대문자의 경우 아스키 코드의 값이 65~90이기 때문에, s1[i]<=90이면 s1[i]+32를 하여 대문자를 소문자로 바꿔준다 'A'=65, 'a'=97 */
    {
        s1[i]=tolower(s1[i]);
    }
    for(int i=0;i<s2.size();i++)
    {
        s2[i]=tolower(s2[i]);
    }

    int a[27]={},b[27]={};
    for(int i=0;i<s1.size();i++)
    {
        a[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++)
    {
        b[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"No anagram";
            return 0;
        }
    }
    cout<<"Anagram";
    return 0;
} 