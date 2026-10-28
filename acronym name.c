#include<stdio.h>
void acronym(char str[])
{
    int i=0;
    if(str[0]!=' ')
    {
    printf("%c",str[i]-32);
    }
    while(str[i]!='\0')
    if(str[i]==" " && str[i+1]>='a',str[i+1]<='z')
    {
        printf("%c",str[i+1]-32);
    }
    else
    {
        printf("%c",str[i+1]);
    
    }
    i++;
}

int main()
{
    char str[]="simran jot";
    acronym(str);
    return 0;
}