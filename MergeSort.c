#include <stdio.h>
void mergeSort(int a[],int b[],int res[],int N1,int N2)
{
    int l=0,m=0,k=0;
    while(l<N1)
    {
        res[k++]=a[l];
        l++;
    }
    while(m<N2)
    {
        res[k++]=b[m];
        m++;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(res[i]>res[j])
            {
                int t=res[i];
                res[i]=res[j];
                res[j]=t;
            }
        }
    }
    for(int i=0;i<k;i++)
        printf("%d ",res[i]);
}
int main()
{
    int N1,N2,i;
    scanf("%d%d",&N1,&N2);
    int a[N1],b[N2];
    for(i=0;i<N1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N2;i++)
        scanf("%d",&b[i]);
    int res[N1+N2];
    mergeSort(a,b,res,N1,N2);    
}
