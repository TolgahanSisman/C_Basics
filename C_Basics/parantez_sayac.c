#include <stdio.h>
int main()
{
    char adDizi[255];
    // SAYAÇLARI ALT ALTA İLKLENDİRME SEBEBİM DAHA KOLAY GÖRÜLÜP OKUNMASI //
    int sayac_1=0;  //   ( sayacı
    int sayac_2=0;  //   ) sayacı
    int sayac_3=0;  //   [ sayacı
    int sayac_4=0;  //   ] sayacı
    int sayac_5=0;  //   { sayacı
    int sayac_6=0;  //   } sayacı

    int parantez_farki_1;
    int parantez_farki_2;
    int koseli_farki_1;
    int koseli_farki_2;
    int suslu_farki_1;
    int suslu_farki_2;
    int i;

    printf("Kodu girebilirsiniz : \n");
    gets(adDizi); // Kodu okur.

    for(i=0;adDizi[i]!='\n' && adDizi[i]!=EOF; i++)  //   Kodun sonuna gelene kadar yapar.
    {
        if (adDizi[i] == '(' )  // eğer i elemanı '(' ise sayac_1 değerini bir arttırır.
            sayac_1++;
        else if (adDizi[i] == ')' )  // eğer i elemanı ')' ise sayac_2 değerini bir arttırır.
            sayac_2 ++;
        else if (adDizi[i] == '[' )  // eğer i elemanı '[' ise sayac_3 değerini bir arttırır.
            sayac_3 ++;
        else if (adDizi[i] == ']' )  // eğer i elemanı ']' ise sayac_4 değerini bir arttırır.
            sayac_4 ++;
        else if (adDizi[i] == '{' )  // eğer i elemanı '{' ise sayac_5 değerini bir arttırır.
            sayac_5 ++;
        else if (adDizi[i] == '}' )  // eğer i elemanı '}' ise sayac_6 değerini bir arttırır.
            sayac_6 ++;
    }
    printf("KODDAKI PARANTEZ SAYILARI\n");
    printf("==========================\n");
    printf("Girdiginiz kodda %d tane '(' var.\n",sayac_1 );  // Parantez Sayılarını ekrana bastırma kısmı.
    printf("Girdiginiz kodda %d tane ')' var.\n",sayac_2 );
    printf("Girdiginiz kodda %d tane '[' var.\n",sayac_3 );
    printf("Girdiginiz kodda %d tane ']' var.\n",sayac_4 );
    printf("Girdiginiz kodda %d tane '{' var.\n",sayac_5 );
    printf("Girdiginiz kodda %d tane '}' var.\n\n\n",sayac_6 );
    printf("KODDAKI EKSIK PARANTEZ BILGISI\n");
    printf("==========================\n");


    if (sayac_1 > sayac_2)              // '(' parantezinin ')' parantezinden fazla olduğu durumda kaç adet fazla oluğunu ekrana basar.
    {
        parantez_farki_1 = (sayac_1 - sayac_2);
        printf(" '(' parantezi ')' parantezinden %d adet fazla\n", parantez_farki_1);
    }
    else if (sayac_2 > sayac_1)         // ')' parantezinin '(' parantezinden fazla olduğu durumda kaç adet fazla oluğunu ekrana basar.
    {
        parantez_farki_2 = (sayac_2 - sayac_1);
        printf(" ')' parantezi '(' parantezinden %d adet fazla\n", parantez_farki_2);
    }

    if (sayac_3 > sayac_4)              // '[' parantezinin ']' parantezinden fazla olduğu durumda kaç adet fazla oluğunu ekrana basar.
    {
        koseli_farki_1 = (sayac_3 - sayac_4);
        printf(" '[' parantezi ']' parantezinden %d adet fazla\n", koseli_farki_1);
    }
    else if (sayac_3 > sayac_4)         // ']' parantezinin '[' parantezinden fazla olduğu durumda kaç adet fazla oluğunu ekrana basar.
    {
        koseli_farki_2 = (sayac_4 - sayac_3);
        printf(" ']' parantezi '[' parantezinden %d adet fazla\n", koseli_farki_2);
    }
    if (sayac_5 > sayac_6) {            // '{' parantezinin '}' parantezinden fazla olduğu durumda kaç adet fazla oluğunu ekrana basar.
        suslu_farki_1 = (sayac_5 - sayac_6);
        printf(" '{' parantezi '}' parantezinden %d adet fazla\n", suslu_farki_1);
    }
    else if (sayac_6 > sayac_5) {   // '}' parantezinin '{' parantezinden fazla olduğu durumda kaç adet fazla oluğunu ekrana basar.
        suslu_farki_2 = (sayac_6 - sayac_5);
        printf(" '}' parantezi '{' parantezinden %d adet fazla'\n'", suslu_farki_2);
    }
}