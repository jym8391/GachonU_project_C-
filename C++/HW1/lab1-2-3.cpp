#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    int div=10000;
    cin>>num;//5?���? ?��?���? ?��?��받아 div�? ?��?��면서 �? ?���? ?��?���? 출력?��?��.
    for(int i=0;i<5;i++)
    {
        cout<<num/div<<" ";
        num=num%div;
        div=div/10;
    }
    return 0;
}      