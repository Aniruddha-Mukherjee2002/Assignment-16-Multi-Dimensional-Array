#include<stdio.h>
void mulMatrix(int a[][3],int b[][3])
{
    int sum = 0,k;
    for(int i =0; i<3; i++)
    {

        for(int j = 0; j<3;j++)
        {
            sum+=a[i][j]*b[j][i];

        }
printf("%d ",sum);
        printf("\n");
        sum = 0;

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
    mulMatrix(a,b);
    return 0;
}
