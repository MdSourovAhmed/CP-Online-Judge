#include<stdio.h>
int Max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    char s[1000006];

    scanf("%s",s);
    int c=1,mx_c=-1;
    for(int i=1;s[i];i++)
    {
        if(s[i]^s[i-1])
        {
            // printf("\n");
            mx_c=Max(c,mx_c);
            c=1;
        }
        else
        {
            // printf("%c",s[i]);
            c++;
        }
    }

    printf("%d\n",Max(c,mx_c));
}