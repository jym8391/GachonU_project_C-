#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n=0, total=0,k=0;
    while(1)
    {
        scanf("%d",&n);
        if(n!=-1) 
        {
            k++;
            total+=n;
        }
        else break;
    }
    printf("%d %d",total,k);
    return 0;
}