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
    for(int i=0;i<s1.size();i++)//tolower s1,s2
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