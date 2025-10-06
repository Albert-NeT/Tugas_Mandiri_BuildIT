#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    int total_pengeluaran = 0;
    int max_pengeluaran;
    int count_max = 0;
    float presentase;

    scanf("%d", &n);
    int pengeluaran[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &pengeluaran[i]);
        total_pengeluaran += pengeluaran[i];
    }

    max_pengeluaran = pengeluaran[0];

    for (int i = 0; i < n; i++) {
        if (pengeluaran[i] > max_pengeluaran) {
            max_pengeluaran = pengeluaran[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (pengeluaran[i] == max_pengeluaran) {
            count_max++;
        }
    }

    presentase = ((double)max_pengeluaran * count_max / total_pengeluaran) * 100.00;

    printf("Max : %d\n", max_pengeluaran);
    printf("Count : %d\n", count_max);
    printf("days :");
    for (int i = 0; i < n; i++) {
        if (pengeluaran[i] == max_pengeluaran){
            printf(" %d", i + 1);
        }
    }

    printf("\nPercentage : %.3f%%\n", presentase);


    return 0;
}
