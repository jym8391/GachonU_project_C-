#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={};
    string s;
    cin>>s;
    for(int i=0;i<5;i++)
    {
        a[s[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<a[i]<<endl;
    }
    return 0;
} 