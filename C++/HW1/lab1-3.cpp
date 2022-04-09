#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double BMI, Weight, Height;//이 코드는 double을 이용함과 동시에 소숫점 한자리 숫자까지 반올림하였기 때문에 실제 결과와 차이가 있을 수 있습니다.
    printf("몸무게(kg)와 키(m)를 입력해주세요 : ");
    scanf("%lf %lf", &Weight, &Height);//몸무게와 키를 입력받는다.
    BMI = (Weight) / (Height * Height);//몸무게와 키를 이용해 BMI를 구한다.
    printf("사용자님의 BMI수치는 %.1lf입니다\n", BMI);//BMI를 출력한다.
    printf("BMI VALUES\nUnderweight : less than 18.5\nNormal :      between 18.5 and 24.9\nOverweight :  between 25 and 29.9\nObese :       30 or greater\n");
    if (BMI < 18.5)//범위에 맞는 경우를 출력한다.
        printf("사용자님의 BMI수치는 저체중입니다\n");
    else if (BMI < 25)
        printf("사용자님의 BMI수치는 정상입니다\n");
    else if (BMI < 30)
        printf("사용자님의 BMI수치는 과체중입니다\n");
    else
        printf("사용자님의 BMI수치는 비만입니다\n");
    return 0;
}       