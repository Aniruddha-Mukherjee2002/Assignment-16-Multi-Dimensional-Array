#include<stdio.h>
int main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    int k = 0,l = 0;
    for(int i = 0; i<3; i++)
    {
        sum+=a[k][l];
        k++,l++;
    }
    printf("Sum of Right Diagonal is %d",sum);
    return 0;
}
