#include <stdio.h>

float toplama(float sayi1, float sayi2){       //TOPLAMA FONKSİYONU
    return sayi1+sayi2;
}

float cikarma(float sayi1, float sayi2){      //ÇIKARMA FONKSİYONU
    return sayi1-sayi2;
}

float carpma(float sayi1, float sayi2){       //ÇARPMA FONKSİYONU
    return sayi1*sayi2;
}

float module(int deger, int mod){             //MOD FONKSİYONU
    return deger%mod;
}

float fact (int n){                           //FAKTORİYEL FONKSİYONU
    if(n==1)
        return 1;
    return n*fact(n-1);
}

float bolme(float sayi1, float sayi2){        //BÖLME FONKSİYONU
    return sayi1/sayi2;
}

int main(){
    float sayi1, sayi2,top_sonuc, cik_sonuc, carp_sonuc, module_sonuc, bol_sonuc;
    int secim, deger, mod, n, fact_sonuc;
    printf(" \n \t --HESAP MAKINESI-- \n");
    printf("\t [ 1 ]Toplama\n");
    printf("\t [ 2 ]Cikarma\n");                         //KULLANICIYA YAPMAK İSTEDİĞİ İŞLEMİ SEÇTİRDİK.
    printf("\t [ 3 ]Carpma\n");
    printf("\t [ 4 ]Bolme\n");
    printf("\t [ 5 ]Faktoriyel Hesaplama\n");
    printf("\t [ 6 ]Mod Alma\n");
    printf("Yapmak istediginiz islemi seciniz:");

    scanf("%d", &secim);

    if (secim == 1){                                              // TOPLAMA
        printf(" Birinci sayiyi giriniz: ");
        scanf("%f", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%f", &sayi2);
        top_sonuc = toplama(sayi1, sayi2);
        printf("%.2f + %.2f = %.2f", sayi1, sayi2, top_sonuc);
    }

    else if (secim == 2){                                       // ÇIKARMA
        printf(" Birinci sayiyi giriniz: ");
        scanf("%f", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%f", &sayi2);
        cik_sonuc = cikarma(sayi1, sayi2);
        printf("%.2f - %.2f = %.2f", sayi1, sayi2, cik_sonuc);
    }

    else if (secim == 3){                                       //ÇARPMA
        printf(" Birinci sayiyi giriniz: ");
        scanf("%f", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%f", &sayi2);
        carp_sonuc = carpma(sayi1, sayi2);
        printf("%.2f * %.2f = %.2f", sayi1, sayi2, carp_sonuc);
    }

    else if (secim == 4) {                                      // BÖLME
        printf(" Birinci sayiyi giriniz: ");
        scanf("%f", &sayi1);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%f", &sayi2);
        if (sayi2 == 0) {
            printf("UYARI: Ikinci sayi 0 olamaz.");
        } else if (sayi2 != 0) {
            bol_sonuc = bolme(sayi1, sayi2);
            printf("%.2f / %.2f = %.2f", sayi1, sayi2, bol_sonuc);
        }
    }
    else if (secim == 5){                                     // FAKTORİYEL
        printf(" Faktoriyelini almak istediginiz sayiyi giriniz: ");
        scanf("%d", &n);
        fact_sonuc = fact(n);
        printf("%d faktoriyel = %d", n, fact_sonuc);
    }

    else if (secim == 6){                                    // MOD ALMA
        printf(" Birinci sayiyi giriniz: ");
        scanf("%d", &deger);
        printf("Ikinci sayiyi giriniz: ");
        scanf("%d", &mod);
        module_sonuc = module(deger, mod);
        printf("%d mod %d = %.2f", deger, mod, module_sonuc);
    }
    return 0;
}