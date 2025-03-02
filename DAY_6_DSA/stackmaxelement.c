#include <stdio.h>
#include <stdlib.h>
#define Max 100

int stack[Max], maxelement[Max], maxindex = -1, index1 = 0;

void push(int x) {
    stack[index1++] = x; 
    if (maxindex == -1 || x >= maxelement[maxindex]) {
        maxelement[++maxindex] = x;
    }
}

void pop() {
    if (index1 == 0) return;
    if (stack[index1 - 1] == maxelement[maxindex]) {
        maxindex--;
    }
    index1--;
}

int getMax() {
    return maxelement[maxindex];
}

int main() {
    int n, x;
    scanf("%d", &n);
    char op[10];

    for (int i = 0; i < n; i++) {
        scanf("%s", op);
        if (op[0] == '1') {
            scanf("%d", &x);
            push(x);
        } else if (op[0] == '2') {
            pop();
        } else if (op[0] == '3') {
            printf("%d\n", getMax());
        }
    }

    return 0;
}
