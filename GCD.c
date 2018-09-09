#include <stdio.h>
int GCD(int N1,int N2)
{
    if(N1==0)
        return N2;
    if(N2==0)
        return N1;
    if(N1>N2)
        return GCD(N1-N2,N2);
    else
        return GCD(N2-N1,N1);
}
int main()
{
    int N1,N2;
    scanf("%d%d",&N1,&N2);
    int N3=GCD(N1,N2);
    printf("%d",N3);
}
