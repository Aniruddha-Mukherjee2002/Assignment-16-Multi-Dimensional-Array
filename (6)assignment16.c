#include<stdio.h>
int main()
{
    int rs = 0,cs = 0,i = 0,j = 0;
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    for( i = 0;i<3;i++)
    {
        for( j=0; j<3; j++)
        {
            cs+=a[i][j];
        }
    }
    for( i = 0;i<3;i++)
    {
        for( j=0; j<3; j++)
        {
            rs+=a[j][i];
        }
    }
    printf("Sum of row is : %d",rs);
    printf("\nSum of coloumn is : %d",cs);
    return 0;
}
