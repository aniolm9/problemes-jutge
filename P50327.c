#include <stdio.h>

int main() {
    int n;
    int out = 0;
    
    scanf("%d%*c", &n);
    while (n > 0) {
        if (n%10 == 0 && out == 0) printf("%d", 0);
        out = out*10 + n%10;
        n=n/10;
    }
    printf("%d\n", out);
}