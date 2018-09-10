#include<stdio.h>
int main()
{
    int n,a[100],k=0,i,j,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a[k++]=n%10;
        n/=10;
    }
    for(i=0;i<k;i++)
        for(j=i+1;j<k;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    for(i=0;i<k;i++)
    {
        if(a[i]==0)       
            c++;
        if(a[i]!=0)
        {
            printf("%d",a[i]);
            break;
        }
    }
    for(i=0;i<c;i++)
        printf("0");
    for(i=c+1;i<k;i++)
        printf("%d",a[i]);
}
