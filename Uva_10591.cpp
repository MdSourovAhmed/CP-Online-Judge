#include<stdio.h>
int main()
{
    int t,b,n,a,sum,flag,p=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        n=a;
        flag=0;
        while(a>=1)
        {
            sum=0;
            if(a==1||a==7)
            {
                flag=1;
                break;
            }
            else if(a==2 || a==3 ||a==4||a==5||a==6||a==7||a==8||a==9)
            {
                flag=0;
                break;
            }
            while(a>0)
            {
                b=a%10;
                sum=sum+b*b;
                a=a/10;
            }
            a=sum;
        }
        if(flag==1)
            printf("Case #%d: %d is a Happy number.\n",++p,n);
        else printf("Case #%d: %d is an Unhappy number.\n",++p,n);
    }
    return 0;
}