#include <stdio.h>

struct Rehber{
    char ad[15];
    char soyad[15];
    long long int numara;
}dizi[5];

void ekleme() {
    int id;
    printf("\n\tKisi Kayit Islemi\n");
    printf("----------------------------------\n");
    for (id = 0; id < 5; id++) {
        printf("  Ad:  ");
        scanf("%s", &dizi[id].ad);

        printf("Soyad:  ");
        scanf("%s", &dizi[id].soyad);

        printf("Tel no (0 Girmeden yaziniz.) :  ");
        scanf("%lld", &dizi[id].numara);

        printf("\nKisi eklendi --->  %s %s  +90%lld\n\n", &dizi[id].ad, &dizi[id].soyad, dizi[id].numara);
    }
}

void listeleme() {
    int id;
    printf("\tKayitli Kisiler\n");
    printf("--------------------------------\n");
    for (id = 0; id < 5; id++) {
        printf("%d- %s %s   (+90)%lld\n", id+1, &dizi[id].ad, &dizi[id].soyad, dizi[id].numara);
    }
}

int main(){

    ekleme();

    listeleme();

    return 0;
}