#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string num;
    cin >> num;//5자리 정수를 문자열로 입력받아 각 문자를 출력한다.
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}   