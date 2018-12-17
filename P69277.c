#include <stdio.h>

int main() {
    int n;

    scanf("%d%*c", &n);

    for (int i = 0; i < n; i++) {
        printf("%d,", i*i*i);
    }
    printf("%d\n", n*n*n);
}