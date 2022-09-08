#include <stdio.h>
#include <string.h>
int main()
{
    char pass[1000]={},pass_input[1000]={};
    printf("Enter new password : ");
    gets(pass);
    printf("Enter new password : ");
    gets(pass_input);
    if(strcmp(pass,pass_input)==0) puts("Correct");
    else puts("Incorrect. Please type your password again");
    return 0;
}