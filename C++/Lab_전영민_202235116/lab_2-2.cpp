#include <stdio.h>
#include <string.h>
int main()
{
    float temp[10]={},sum=0,avg=0;
    int count=0;
    printf("Type 7 temperature values:\n");
    for(int i=0;i<7;i++)
    {
        scanf("%f",&temp[i]);
        sum+=temp[i];
    }
    avg=sum/7.0;
    printf("Average temperature: %f\n",avg);
    for(int i=0;i<7;i++)
    {
        if(temp[i]<=avg) count++;
    }
    printf("The number of days below average temperature: %d",count);
    return 0;
}