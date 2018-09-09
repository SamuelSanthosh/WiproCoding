#include<stdio.h>
int main()
{
    int N,r,sum=0;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        N/=10;
        sum+=r;
    }
    printf("%d",sum);
}
