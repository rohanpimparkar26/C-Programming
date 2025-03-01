#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=25;
    printf("value of allocated:%d\n",*ptr);
    free(ptr);
}