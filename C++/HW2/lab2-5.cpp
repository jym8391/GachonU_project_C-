#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[1000]={};
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')//대문자도 처리해야함.
        {
            putchar(a[i]);
        }
    }
    return 0;
} 