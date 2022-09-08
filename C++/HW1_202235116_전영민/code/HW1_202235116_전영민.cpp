#include <bits/stdc++.h>
using namespace std;
#define RMAX 4
/*
    Author : Jeon Young Min
    date : 2022.09.04
*/

int main ()
{
    int slot[4]={};
    char slotvalue[][10]={"","BAR","BELL","LEMON","CHERRY"};
    char anykey;
    while(true)
    {
        int cherrycnt=0,samecnt=0;
        printf("type any key to start the slot machine : ");  //input
        scanf ("%c", &anykey);
        srand(time(NULL));
        slot[1] = 1 + (int) rand() % RMAX;
        slot[2] = 1 + (int) rand() % RMAX;
        slot[3] = 1 + (int) rand() % RMAX;
        if(slot[1]==slot[2]&&slot[2]==slot[3]) samecnt ++;  //Check all three same.
        for(int i=1;i<=3;i++)
        {
            if(!strcmp(slotvalue[slot[i]],"CHERRY")) cherrycnt ++;  //Count the number of cherries. 
        }
        for(int i=1;i<=3;i++) printf("slot%d : %s\n",i,slotvalue[slot[i]]);
        printf("\n");
        if(cherrycnt==3&&samecnt>0) printf ("Congratulations On A JACKPOT\n\n");
        else if(cherrycnt>0) printf("Paid Out: One DIME\n\n");
        else if(samecnt>0) printf("Paid Out: One Nicke\n\n");
        else printf("Sorry. Better Luck Next Time\n\n");
    }
    return 0;
}