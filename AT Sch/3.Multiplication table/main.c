#include <stdio.h>

int main(){
    int i, j;
    int size = 10;

    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if (j == size) {
                printf("%4d", i * j);
            } else {
                printf("%4d ", i * j);
            }
        }
        printf("\n");
    }

    return 0;
}
