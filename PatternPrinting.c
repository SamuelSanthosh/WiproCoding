I/P:5
O/P:
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15

#include<stdio.h>
int main()
{
    int N,ct=1,k=1;
    scanf("%d",&N);
    int a[N][N];
    for(int i=0;i<N;i++)
    {
            for(int j=0;j<=i;j++)
            {
                a[i][j]=ct++;
            }
    }
    for(int i=0;i<N;i++)
    {
        k=1;
        if(i%2==1)
        {
            for(int j=i;j>=0;j--)
            {
                printf("%d",a[i][j]);
                if(k<=i)
                {
                    printf("*");
                    k++;
                }
            }
        }
        else
        {
            for(int j=0;j<=i;j++)
            {
                printf("%d",a[i][j]);
                if(k<=i)
                {
                    printf("*");
                    k++;
                }
            }    
        }
        printf("\n");
    }
}
