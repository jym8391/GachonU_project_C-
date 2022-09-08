#include <stdio.h>
#include <string.h>

int set_triangle(void)
{
    int s[5]={};
    int cos[5]={};
    char a;
    for(int i=1;i<=3;i++)
    {
        printf("Enter side %d: ",i);
        scanf("%d",&s[i]);
        a=getchar();
        if(s[i]<=0) return 0;
    }
    cos[1]=(s[1]*s[1]-(s[2]*s[2]+s[3]*s[3]));
    cos[2]=(s[2]*s[2]-(s[1]*s[1]+s[3]*s[3]));
    cos[3]=(s[3]*s[3]-(s[2]*s[2]+s[1]*s[1]));
    for(int i=1;i<=3;i++)
    {
        if(cos[i]==0) return 1;
    }
    return 0;
}

int main()
{
    char answer[1000]={};
    while(1)
    {
        printf("Will you check right angled triangle?\n");
        gets(answer);
        if(strcmp(answer,"yes")==0)
        {
            int check = set_triangle();
            if(check==0) puts(" The numbers don't make a right triangle");
            else if(check==1) puts(" The numbers make a right triangle");
        }
        else if(strcmp(answer,"no")==0) break;
    }
    return 0;
}