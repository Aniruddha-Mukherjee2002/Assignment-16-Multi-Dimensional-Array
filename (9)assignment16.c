#include<stdio.h>
int isSparse(int a[][3])
{
    int countzero = 0;
    for(int i = 0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            if(a[i][j]==0)
            {
                countzero++;
            }
        }
    }
    if(countzero>=4)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a[3][3];
    printf("Enter 9  numbers : ");
    for(int i = 0;i<3; i++)
    {
        for(int j = 0;j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(isSparse(a))
        printf("It is a Sparse Matrix\n");
    else
        printf("It is not a Sparse Matrix\n");

    return 0;
}
