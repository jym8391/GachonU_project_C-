#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2;
    long long int result = 0;//int의 경우 더하거나, 곱하였을때 int범위를 벗어날 수 있기 때문에 long long int 로 선언하였습니다.
    scanf("%d %d",&num1,&num2);
    if(num1<num2)
    {
        result = (long long int)num1 + num2;
    }
    else result = (long long int)num1 * num2;
    printf("%lld",result);
    return 0;
}   
