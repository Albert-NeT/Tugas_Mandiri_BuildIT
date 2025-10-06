#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char kalimat[256];
    char kata[50] [100];
    int jumlah_kata = 0;
    
    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = 0;
    char *token = strtok(kalimat, " ");
    
    while (token != NULL){
        strcpy(kata[jumlah_kata], token);
        jumlah_kata++;
        token = strtok(NULL, " ");
    }
    
    if (jumlah_kata <= 1) {
        for (int i = 0; i < jumlah_kata; i++) {
            printf("%s\n", kata[i]);
        }
        return 0;
    }
    
    char kata_unik[50][100];
    int jumlah_kata_unik = 0;
    
    for (int i = 0; i < jumlah_kata; i++){
        int sudah_ada = 0;
        for (int j = 0; j < jumlah_kata_unik; j++){
            if (strcmp(kata[i], kata_unik[j]) == 0){
                sudah_ada = 1;
                break;
            }
        }
        
        if (!sudah_ada){
            strcpy(kata_unik[jumlah_kata_unik], kata[i]);
            jumlah_kata_unik++;
        }
    }
    
    for (int i = 0; i < jumlah_kata_unik; i++){
        printf("%s", kata_unik[i]);
        if (i < jumlah_kata_unik - 1){
            printf(" ");
        }
    }
    
    return 0;
}
