#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N;
    scanf("%d", &N);
    int space = N - 2;
    int star = 1;
    
    for (int i = 1; i < N; i++){
        for (int sp = 0; sp < space; sp++){
            printf(" ");
        }
        for (int st = 0; st < star; st++){
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }
    
    space = N - 2;
    for (int b = 0; b < space; b++ ){
        printf(" ");
    }
    printf("*");
    
    return 0;
}
