#include<stdio.h>
void LowerTri(int a[][3])
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            if(j>i)
            {
                a[i][j] = 0;
            }
        }
    }
}
void display(int a[][3])
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    LowerTri(a);
    display(a);
    return 0;
}
