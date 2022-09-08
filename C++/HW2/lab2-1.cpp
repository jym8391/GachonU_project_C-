#include <bits/stdc++.h>
using namespace std;

int n, a[1000001];/*전역 변수로 변수 초기화, 문제에서 주어지는 n이 1이상의 정수라고 가정한다. 
                    입력되는 n의 범위가 주어지지 않았기 때문에 배열의 크기를 1000001로 임의로 설정하였지만,
                    n의 범위가 커지면 배열의 크기를 늘려도 되고 너무 커졌을 경우에는 
                    for(int i=2;i<=n;i++)
                    {
                        if(n%i==0)
                        {
                            cout<<"not prime";
                            return 0;
                        }
                    }
                    cout<<"prime";
                    return 0;
                    같은 방식으로 수정할 수 있다.
                    */

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