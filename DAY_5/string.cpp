#include<stdio.h>
int main(){
    char str[]="Hello";
    char *str2[]={"hello1","Hello2","Hello3"};
    for(int i=0;i<3;i++)
    {
        printf("%s ",str2[i]);
        printf("\n");
    }

}    