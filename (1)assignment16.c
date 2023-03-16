#include<stdio.h>
void addMatrix(int a[][3],int b[][3])
{
    for(int i = 0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            printf("%d ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[3][3];
    int b[3][3];
    int k = 1;
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            a[i][j] = b[i][j] = k++;
        }
    }
    addMatrix(a,b);
    return 0;

}
