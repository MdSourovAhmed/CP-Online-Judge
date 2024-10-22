#include <stdio.h>
int main()
{
    int n;
    while ((scanf("%d", &n) != EOF) && n != -1)
    {
        while (n--)
        {
            int a, b, ans = 1;
            scanf("%d %d", &a, &b);
            while (--a)                   //for every no of ball, lets cheack if it will go left or right, level-1 times
            {                             
                if (b & 1)                //if ball no is odd it will go to the left subtree 
                {
                    b = (b + 1) >> 1;     //the next no of ball should be half of the previous one (b being odd (b+1)/2) is done
                    ans <<= 1;            //and the next node will be muultiple of 2.
                }
                else                     //if ball no is even it will go to the right subtree
                {
                    b = b >> 1;           //the next no of ball should be half of the previous one (b being even (b)/2) is done
                    ans = (ans << 1) + 1;  //and the next node will be muultiple of 2+1.
                }
            }
            printf("%d\n", ans);            //should see and observe the graph provided in the question
        }
    }

}


//input
// 5
// 4 2
// 3 4
// 10 1
// 2 2
// 8 128
// -1

//output
// 2
// 7
// 512
// 3
// 255