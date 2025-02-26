#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    printf("Original Matrix: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");

    }

    for(int i=0;i<3/2;i++)
    {
        for(int j=0;j<3;j++)
        {
            int temp = a[i][j];
            a[i][j]=a[3-1-i][j];
            a[3-1-i][j]= temp;
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3/2;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[i][3-1-j];
            a[i][3-1-j]=temp;

        }
    }

    printf("Reversed matrix: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    return 0;


}