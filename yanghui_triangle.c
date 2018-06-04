#include <stdio.h>
#define N 10
int main()
{
    int a[N][N],i,j,k;
    for(i=0;i<N;i++)
    {
        for(k=0;k<=N-i;k++)
            printf("  ");
        for(j=0;j<=i;j++)
        {
            if(i==j||j==0)
                a[i][j]=1;
            else
                a[i][j]=a[i-1][j]+a[i-1][j-1];
            printf("%3d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}