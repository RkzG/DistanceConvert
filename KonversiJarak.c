#include <stdio.h>

int main(){
    int  pilihanKonversi;
    float km,meter,cm;



    printf("Input jarak (KM):");
    scanf("%f", &km);

    printf("Konversi Jarak By Franky\n");
    printf("1. Konversi ke meter\n");
    printf("2. Konversi ke sentimeter\n");
    printf("Pilih Konversi (1 / 2): ");
    scanf("%d",&pilihanKonversi);
    getchar();

    if(pilihanKonversi == 1){
        meter = km * 1000;
        printf("Konversi jarak ke meter: %.2f m\n", meter);
    }else if (pilihanKonversi == 2){
        cm = km * 100000;
        printf("Konversi jarak ke meter: %.2f cm\n", cm);
    }else {
        printf("Pilihan yang anda masukkan tidak valid.\n");
    }

    return 0;

}