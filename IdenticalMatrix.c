#include <stdio.h>
# define N 4
int isIdentical(int A[][N],int B[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(A[i][j]!=B[i][j])
            {
                return 0;
                break;
            }    
        }
    }
    return 1;
}
int main()
{
    int A[N][N]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int B[N][N]={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    if(isIdentical(A,B))
        printf("Yes");
    else
        printf("No");
}
