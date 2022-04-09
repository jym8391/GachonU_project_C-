#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num[10];
    for(int i=0;i<5;i++)
    {
        scanf("%1d",&num[i]);//5자리 정수를 각 변수에 하나씩 입력받아 저장한뒤 출력한다.
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}      