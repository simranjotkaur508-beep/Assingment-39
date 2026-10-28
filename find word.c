#include<stdio.h>
void findWord(char str[],char ch[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str,ch !='\0')
        {
            printf("word found");
        }
        else
        {
            printf("word not found");
        }
    }
}

int main()
{
    char str[]="I LOVE YOU";
    char ch[]="LOVE";
    findWord(str,ch);
    return 0;
}