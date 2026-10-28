#include <stdio.h>
int firstCharacter(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[0]!='\0')
        {
            str[0]=str[0]-32;
        }

        while (str[i]!='\0')
        {
            if(str[i]==' ' && str[i+1]>='a' ,str[i+1]<='z')
          {
            str[i+1]=str[i+1]-32;
            i++;

          }


        }
        
    }
 
}

int main()
{
    char str[]={"hello world"};
    firstCharacter(str);
    printf("capital string %s",str);
    
    return 0;
}