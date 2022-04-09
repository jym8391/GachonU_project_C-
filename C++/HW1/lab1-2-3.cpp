#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int num;
    int div=10000;
    cin>>num;//5?ЮРыж? ?аХ?ИШые? ?ЮЕ?аеы░ЫьХД divыб? ?ВШ?ИДый┤ьДЬ ъ░? ?ЮРыж? ?Ил?ЮРые? ь╢Ьыае?ХЬ?Лд.
    for(int i=0;i<5;i++)
    {
        cout<<num/div<<" ";
        num=num%div;
        div=div/10;
    }
    return 0;
}      