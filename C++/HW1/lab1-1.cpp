#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double s, t, v, a, u;
    printf("�ʱ�ӵ� ���ӵ� �ð��� �Է����ּ��� : ");
    scanf("%lf %lf %lf",&u,&a,&t); //�ʱ�ӵ�, ���ӵ�, �ð�
    v = u + a*t; //���� �ӵ� = �ʱ�ӵ� + ���ӵ�*�ð�
    s = u*t + 0.5*a*t*t; //�̵��Ÿ� = �ʱ�ӵ�*�ð� + 0.5*���ӵ�*�ð�*�ð�
    printf("���� �ӵ� : %.2lf\n�̵� �Ÿ� : %.2lf\n",v,s);
    return 0;
}           