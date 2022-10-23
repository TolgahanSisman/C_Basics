/*
İLK FOR DÖNGÜSÜ     ---> dizenin son karakteri null olana kadar dönüyor.
j DEĞİŞKENİ         ---> dizenin uzunluğu
n DEĞİŞKENİ         ---> j değişkenini, n değişkeninin içine atadık.
SAYAC               ---> 0'dan başlayıp her karakterin sıklığını sayıyor.
DIŞTAKİ FOR DÖNGÜSÜ ---> kelimeden tek tek harf alıyor.
İÇTEKİ FOR DÖNGÜSÜ  ---> alınan harfi kelimedeki diğer harflerle karşılaştırıyor. Eğer varsa sayac değeri 1 artıyor ve ekrana yazdırıyor.
*/

#include <stdio.h>

int main(){
    char kelime[1000];
    int  i, j, n, sayac = 0;
    printf("Kelimeyi giriniz : ");
    gets(kelime);
    for (j = 0; kelime[j]; j++);
    n = j;
    printf("\n===============================\n");
    printf("Hangi harften kac adet var:\n");
    printf("===============================\n");
    for (i = 0; i < n; i++){
        sayac = 1;
        if (kelime[i]){
            for (j = i + 1; j < n; j++){
                if (kelime[i] == kelime[j]){
                    sayac++;
                    kelime[j] = '\0';
                }
            }
            printf("'%c' = %d \n", kelime[i], sayac);
        }
    }
    printf("===============================\n");
    return 0;
}