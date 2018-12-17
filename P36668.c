#include <stdio.h>

int main() {
    int n;
    int suma = 0;

    scanf("%d%*c", &n);
    for (int i = 1; i <= n; i++) {
        suma = suma + i*i;
    }
    printf("%d\n", suma);

}