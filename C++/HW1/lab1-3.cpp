#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double BMI, Weight, Height;//�� �ڵ�� double�� �̿��԰� ���ÿ� �Ҽ��� ���ڸ� ���ڱ��� �ݿø��Ͽ��� ������ ���� ����� ���̰� ���� �� �ֽ��ϴ�.
    printf("������(kg)�� Ű(m)�� �Է����ּ��� : ");
    scanf("%lf %lf", &Weight, &Height);//�����Կ� Ű�� �Է¹޴´�.
    BMI = (Weight) / (Height * Height);//�����Կ� Ű�� �̿��� BMI�� ���Ѵ�.
    printf("����ڴ��� BMI��ġ�� %.1lf�Դϴ�\n", BMI);//BMI�� ����Ѵ�.
    printf("BMI VALUES\nUnderweight : less than 18.5\nNormal :      between 18.5 and 24.9\nOverweight :  between 25 and 29.9\nObese :       30 or greater\n");
    if (BMI < 18.5)//������ �´� ��츦 ����Ѵ�.
        printf("����ڴ��� BMI��ġ�� ��ü���Դϴ�\n");
    else if (BMI < 25)
        printf("����ڴ��� BMI��ġ�� �����Դϴ�\n");
    else if (BMI < 30)
        printf("����ڴ��� BMI��ġ�� ��ü���Դϴ�\n");
    else
        printf("����ڴ��� BMI��ġ�� ���Դϴ�\n");
    return 0;
}       