#include <stdio.h>
# define R 3
# define C 3
void spiral(int m,int n,int a[R][C])
{
    int k=0,l=0,i;
    while(k<m&&l<n)
    {
        for(i=l;i<n;++i)
            printf("%d",a[k][i]);
        k++; 
        for(i=k;i<m;++i)
            printf("%d",a[i][n-1]);
        n--;    
        if(k<m)
        {
            for(i=n-1;i>=l;--i)
                printf("%d",a[m-1][i]);
            m--;    
        }
        if(l<n)
        {
            for(i=m-1;i>=k;--i)
                printf("%d",a[i][l]);
            l++;    
        }
    }
}
int main()
{
    int A[R][C]={{1,2,3},{4,5,6},{7,8,9}};
    spiral(R,C,A);
    return 0;
}
