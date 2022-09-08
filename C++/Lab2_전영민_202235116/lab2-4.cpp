#include <bits/stdc++.h>
using namespace std;

int main()
{
    float N,N2;
    int P;
    cin>>N>>P;
    N2=N;
    for(int i=0;i<P-1;i++)
    {
        N=N*N2;
    }
    cout<<N;
    return 0;
} 