#include <stdio.h>

int main() {
    char str[5][20];
    printf("Enter three strings:\n");
    for(int i = 0; i < 3; i++) {
        scanf("%s", str[i]);  
    }
    for(int i=0;i<3;i++)
    {
        printf("%s\n", str[i]);
    }

    return 0;
}

