#include <stdio.h>

int main() {
    int linferior, lsuperior;
    scanf("%d %d%*c", &linferior, &lsuperior);

    for (linferior; linferior < lsuperior; linferior++) {
        printf("%d,", linferior);
    }
    if (linferior == lsuperior) {
        printf("%d\n", linferior);
    }
    else {
        printf("\n");
    }
}
