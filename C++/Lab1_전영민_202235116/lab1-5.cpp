#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balance,i=1;
    float rate;
    scanf("%d %f",&balance,&rate);
    rate = rate/(float)100 + 1;
    while(i<=4)
    {
        printf("balance after %d year = %.0f\n",i,balance*rate);//pdf에는 소숫점이 없어, 따로 처리하였습니다.
        balance*=rate;
        i++;
    }
    return 0;
}  
/* 문제 제시에서 balance가 int로 선언이기 때문에 묵시적 형변환만으로는 완벽하게 처리 되지 않을 수 있기 때문에 float 변수를 새로 선언하여
   명시적 형변환을 이용하여 balance값을 받아들여 float형끼리 연산하는 것이 좀 더 안전하게 값을 도출해낼 수 있다.
   아래 코드는 실제로 작동되는 코드를 첨부한것입니다.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int balance,i=1;
    float rate , balance_float;
    scanf("%d %f",&balance,&rate);
	balance_float = (float)balance;
    rate = rate/(float)100 + 1;
    while(i<=4)
    {
		balance_float *= rate;
        printf("balance after %d year = %.0f\n",i,balance_float);
        i++;
    }
    return 0;
}  */