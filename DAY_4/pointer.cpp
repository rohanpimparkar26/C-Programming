#include<stdio.h>
int main()
{
    int a=10;
    int *p
    int **p1=&p;
    p=&a;
    printf("%d ",a);//10
    printf("%d ",p);//address a
    printf("%d ",*p);//10
}