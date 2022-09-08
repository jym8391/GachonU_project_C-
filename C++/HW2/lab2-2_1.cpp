#include <bits/stdc++.h>
using namespace std;

void palindrome(int n)//div,mod 연산을 이용하여 각 자리를 분리하여 앞뒤를비교
{
    int n1=n/10000,n2=n/1000%10,n3=n/100%10,n4=n/10%10,n5=n%10;
    if((n1==n5)&&(n2==n4)) cout<<n<<" is a palindrome"<<endl;
    else cout<<n<<" is not a palindrome"<<endl;
}

int main()
{
    int n;
    cout<<"Enter a five-digit number: ";
    cin>>n;
    palindrome(n);
    return 0;
} 