#include <stdio.h>
main()
{
    int a[5][5],i,j;
    char name[5][10]={"����","����","����","����","ƽ��"};
    char sub[6][10]={"����","����","��ѧ","Ӣ��","����","�ܷ�"};
    for(j=0;j<6;j++) printf("%5s",sub[j]);
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%5s",name[i]);
        a[i][4]=0;
        for(j=0;j<4;j++)
        {
            a[i][j]=rand()%101;
            printf("%5d",a[i][j]);
            a[i][4]+=a[i][j];
        }
        printf("%5d\n",a[i][4]);
    }
    printf("%5s",name[4]);
    for(j=0;j<5;j++)
    {
        a[4][j]=0;
        for(i=0;i<4;i++)
        {
            a[4][j]+=a[i][j];
        }
    }
    printf("%d",a[4][j]/4);
}
