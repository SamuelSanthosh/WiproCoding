I/P:4
O/P:
1*2*3*4*17*18*19*20
--5*6*7*14*15*16
----8*9*12*13
------10*11

#include<stdio.h>
int main()
{
    int N,i,j,k,s,a,b;
    scanf("%d",&N);
    b=N*N+1,a=1;
    for(i=N;i>=1;i--)
    {
        for(s=0;s<N-i;s++)
            printf("--");
        for(j=0;j<i;j++)
            printf("%d*",a++);
        for(k=0;k<i-1;k++)
            printf("%d*",b++);
        printf("%d\n",b);
        b-=2*(i-1);
    }
}
