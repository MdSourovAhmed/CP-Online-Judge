#include<stdio.h>
int main()
{
    char c='\0';
    while(scanf("%c",&c)!=EOF)
    {
        (c!='\n')?printf("%c",c-7):printf("\n");
    }
}