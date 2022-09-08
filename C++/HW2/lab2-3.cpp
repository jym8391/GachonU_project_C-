#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={};
    string s;
    cin>>s;
    for(int i=0;i<5;i++)//이 방식을 이용한다면 9뿐만 아니라 0~9 중 i라는 숫자가 몇 번 나왔는지 알 수 있다.
    {
        a[s[i]-'0']++;//'0'을 빼는 이유는 문자인 숫자에 아스키 코드 값을 빼서 정수로 만들기 위함이다.
        //예를 들어 문자 9(숫자)를 9라는 수로 바꾸는 과정이다. '9'-'0'->57-48=9
    }
    cout<<a[9];
    return 0;
} 