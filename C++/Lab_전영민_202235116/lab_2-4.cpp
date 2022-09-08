#include <stdio.h>
#include <string.h>
int main()
{
    int n,m;
    char fillCharacter;
    printf("Enter a character to fill the rectangle: ");
    scanf("%c",&fillCharacter);
    printf("\nEnter sides: ");
    scanf("%d %d",&n,&m);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c ",fillCharacter);
        }
        printf("\n");
    }
    return 0;
}