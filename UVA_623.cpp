// #include <stdio.h>
// #include <iostream>
// using namespace std;
// const int N = 1e7;
// int F[N];
// // void Print_Facto(int &a)
// // {
// //     int in =ind;
// //     in--;
// //     while (in >= 0)
// //     {
// //         cout << F[in];
// //         in--;
// //     }
// //     // int in = ans[a].size();
// //     // in--;
// //     // while(in>=0){cout<<ans[a][in];in--;}
// // }

// void Facto(int &n)
// {
//     F[0]=1;
//        int ind=1;
//        int c = 0;
//        for(int i=1;i<=n;i++)
//        {
//             for(int j=0;j<ind;j++)
//             {
//                int x = F[j]*i+c;
//                F[j]=x%10;
//                c = x/10;
//             }
//              while(c)
//              {
//                F[ind]=c%10;
//                c = c/10;
//                ind++;
//              }
//       }

//       ind--;
//         while (ind >= 0)
//         {
//             cout << F[ind];
//             ind--;
//         }
// }

// int main()
// {
//     int a;
//     while (scanf("%d", &a))
//     {
//         printf("%d!\n", a);
//         Facto(a);
//         cout << endl;
//     }
// }


#include<stdio.h>
int a[1000000];
int n,i,j,temp,m,x;
void factorial(int n)
{
    a[0]=1;
       m=1;
       temp = 0;
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp;
               a[j]=x%10;
               temp = x/10;
            }
             while(temp>0)
             {
               a[m]=temp%10;
               temp = temp/10;
               m++;
             }
      }
              for(i=m-1;i>=0;i--)
              printf("%d",a[i]);
}
int main()
{
    int num;
    while(scanf("%d",&num)==1){
        printf("%d!\n",num);
        factorial(num);
        printf("\n");
    }
   return 0;
}