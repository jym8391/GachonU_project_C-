#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[22]={};
    for(int i=1;i<=10;i++) cin>>a[i];//read two sets of numbers
    for(int i=11;i<=20;i++) cin>>a[i];
    sort(a+1,a+21);//정렬, 사용자 정의 함수로 bubble_sort를 만들어서 사용해도 됨.
    /*
       배열을 전역변수로 선언한 다음에
       사용자 정의 함수 bubble_sort()
       void bubble_sort(void)
       {
           for(int i=1;i<=20;i++)
           {
               for(int j=1;j<=20;j++)
               {
                   if(a[i]>a[j])
                   {
                       int temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }
       }
       이런식으로 작성후 에 sort부분대신끼워넣어도 된다.
    */
    for(int i=1;i<=20;i++)//이미 정렬을 해둔 배열에서 중복되지 않은 값들만 출력
    {
        if(a[i]==a[i-1]) continue;
        else cout<<a[i]<<" ";
    }
    return 0;
} 