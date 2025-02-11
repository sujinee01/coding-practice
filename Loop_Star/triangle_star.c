#include <stdio.h>

int main(void) {
    int i, j, k;

    for (i = 0; i < 6; i++) { 
        for (j = 0; j < i / 2; j++) { 
            printf(" ");
        }

        for (k = 0; k < i; k++) { 
            printf("*");
        }

        for (j = 0; j < i / 2; j++) { 
            printf(" ");
        }

        printf("\n"); 
    }

    return 0;
}
