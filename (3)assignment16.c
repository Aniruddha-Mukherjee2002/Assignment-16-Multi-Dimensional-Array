#include<stdio.h>
void transpose(int a[][3],int r,int c)
{
    int temp[r][c];
    for(int i = 0; i<r; i++)
    {
        for(int j =0; j<c; j++)
        {
           temp[j][i] = a[i][j];
        }
    }
printf("Transpose of the Matrix is:\n");
    for(int i = 0; i<r; i++)
    {
        for(int j =0; j<c; j++)
        {
           printf("%d ",temp[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3];
    printf("Enter 9 number : \n");
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    transpose(a,3,3);
    return 0;
}
