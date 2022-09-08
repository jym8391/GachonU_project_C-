#include <stdio.h>
#include <string.h>

char Grade[10]={'F','D','C','B','A'};
int Grade_count[10];

void CountGrade()
{
    printf("\nThe totals for converted letter grade are:\n");
    for(int i=0;i<=4;i++)
    {
        if(4-i==0) continue;
        printf("%c: %d\n",'A'+i,Grade_count[4-i]);
    }
    printf("%c: %d\n",'F',Grade_count[0]);
}
int main()
{
    while(1)
    {
        int n;
        printf("Enter a numberic grade: ");
        scanf("%d",&n);
        if(n==-1) break;
        else if(n<=4&&n>=0)
        {
            printf("You got %c.\n",Grade[n]);
            Grade_count[n]++;
        }
        else printf("You can only type 1 or 2 or 3 or 4.\n");
    }
    CountGrade();
    return 0;
}