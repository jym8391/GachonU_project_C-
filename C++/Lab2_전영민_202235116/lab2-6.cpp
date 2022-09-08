#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[22]={},b[22]={}, j=0;
    for(int i=0;i<10;i++) cin>>a[i];//read two sets of numbers
    for(int i=10;i<20;i++) cin>>a[i];
    for(int i=0;i<20;i++)
    {
        b[i]=-12402184;//중복되지 않을 것 같은 값으로 초기화
    }
    for(int i=0;i<20;i++)
    {
        for(int k=0;k<20;k++)
        {
            if(b[k]==-12402184)//한 번도 들어오지 않은 값이라면 값에 넣고 break
            {
                b[k]=a[i];
                j++;
                break;
            }
            else if(a[i]!=b[k])//들어온 값과 다르다면 continue
            {
                continue;
            }
            else break;//이미 들어온적이 있다면 break
        }
    }
    for(int i=0;i<j;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
} 