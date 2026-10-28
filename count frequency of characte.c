#include<stdio.h>
void countFrequency(char str[],char ch[])
{
    int count=0;

    for(int i=0;str[i]!='\0';i++)
    {
        for (int j=0;str[j]=!'\0';j++)
        {
            if(str[i]==ch[j])
            {
                count++;
            }
        }
    }

}

int main()
{
    char str[30],ch[30];
    printf("enter a string");
    scanf("%29s",&str);
    countFrequency(str,ch);
    printf("frequency of characer %d",countFrequency);
    return 0;
}