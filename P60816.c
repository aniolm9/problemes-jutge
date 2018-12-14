#include <stdio.h>

int main() {
    int n, temp;
    
    scanf("%d%*c", &n);

    if (n==0) printf("0");
    while (n > 0) {
        temp = n%16;
        if (temp == 10) printf("%c", 'A');
        else if (temp == 11) printf("%c", 'B');
        else if (temp == 12) printf("%c", 'C');
        else if (temp == 13) printf("%c", 'D');
        else if (temp == 14) printf("%c", 'E');
        else if (temp == 15) printf("%c", 'F');
        else printf("%d", temp);
        n=n/16;
    }
   
    printf("\n");
}
