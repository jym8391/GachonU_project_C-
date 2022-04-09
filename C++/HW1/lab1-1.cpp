#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double s, t, v, a, u;
    printf("초기속도 가속도 시간을 입력해주세요 : ");
    scanf("%lf %lf %lf",&u,&a,&t); //초기속도, 가속도, 시간
    v = u + a*t; //나중 속도 = 초기속도 + 가속도*시간
    s = u*t + 0.5*a*t*t; //이동거리 = 초기속도*시간 + 0.5*가속도*시간*시간
    printf("나중 속도 : %.2lf\n이동 거리 : %.2lf\n",v,s);
    return 0;
}           