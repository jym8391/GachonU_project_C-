#include <bits/stdc++.h>
using namespace std;

int n, a[1000001];//reset

int main()
{
    cin>>n;
    if(n==1||n<=0){
        cout<<"invalid value"<<endl;
        return 0;
    }
    for(int i=2; i<=n; i++)
    {
        if(a[i]) continue;
        for(int j=2; i*j<=n; j++)
        {
            a[i*j]=1;
        }
    }
    if(a[n]) cout<<"not prime"<<endl;
    else cout<<"prime"<<endl;
    return 0;
} 