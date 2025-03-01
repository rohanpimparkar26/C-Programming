#include<stdio.h>
void demo(int *ptr)
{
    *ptr=50;
}
int main()
{
    int a=10;
    printf("before printing: %d,a");
    demo(&a);
    printf("after printing %d\n",a);
}