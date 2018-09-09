#include<stdio.h>
int main()
{
    int a=0,b=1,c,N;
    scanf("%d",&N);
    printf("%d %d",a,b);
    for(int i=2;i<N;i++)
    {
        c=a+b;
        if(c==N)
            break;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
