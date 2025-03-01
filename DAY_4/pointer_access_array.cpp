#include<iostream>
int main()
{
    int a[]={10,20,30,40};
    int *ptr=a;
    for(int i=0;i<4;i++)
    {
        printf("value of a[%d]=%d\n",i,*(ptr+i));
    }



}