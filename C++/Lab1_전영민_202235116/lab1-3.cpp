#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sec;
    scanf("%d",&sec);
    printf("%d:%d:%d",sec/3600,sec%3600/60,sec%3600%60);
    return 0;
}   
