#include <stdio.h>

float toplama(float sayidizisi[]) {
    float toplam = 0;
    int i;
    for (i = 0; i < 5; i++)
        toplam = toplam + sayidizisi[i];
    printf("Dizi Toplami: %.1f\n", toplam);
}

float carpma(float sayidizisi[]){
    float carpim = 1;
    int i;
    for (i =0; i<5; i++)
        carpim=carpim*sayidizisi[i];
    printf("Dizi Carpimi: %.1f", carpim);
}

int main(){
float sayidizisi[5];
int i;

for( i = 0; i < 5; i++ ) {
    printf("%d. elemani giriniz->", (i + 1));
    scanf("%f", &sayidizisi[i]);
}

printf("\nDizi Elemanlari: %.1f, %.1f, %.1f, %.1f, %.1f \n",sayidizisi[0],sayidizisi[1],sayidizisi[2],sayidizisi[3],sayidizisi[4]);
toplama(sayidizisi);
carpma(sayidizisi);

return 0;
}