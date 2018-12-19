#include <stdio.h>

int main() {
    double suma = 0;
    double input, mitjana;
    char t;
    int n = 0;
    
    while (t != '\n') {
        scanf("%lf%c", &input, &t);
        suma = suma + input;
        n++;

    }
    mitjana = suma/n;
    printf("%.2lf\n", mitjana);
}
