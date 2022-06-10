#include <stdio.h>
#include <stdlib.h>

int i, j;

struct GenelOzellik
{
    int plaka1;
    char plaka2[5];
    int plaka3;
    char model[20];
    char renk[20];
}ozellik[1000];

struct GirisSaati
{
    int saat;
    int dakika;
    int saniye;
}zaman[1000];

struct GenelOzellik genel()
{
    struct GenelOzellik genel;
    printf(" Sirayla plakasini, modelini, rengini giriniz: ");
    scanf("%d %s %d %s %s",
          &genel.plaka1,
          &genel.plaka2,
          &genel.plaka3,
          &genel.model,
          &genel.renk);

    return genel;
};

struct GirisSaati zmn()
{
    struct GirisSaati giris;
    printf(" Giris saatini giriniz : ");
    scanf("%d %d %d",
          &giris.saat,
          &giris.dakika,
          &giris.saniye);

    return giris;
};

void AraclariListele(struct GenelOzellik ozellik, struct GirisSaati zaman)
{
        printf(" Plakasi: %d %s %d\n Modeli: %s\n Rengi: %s\n Giris saati: %d:%d:%d\n",
               ozellik.plaka1,
               ozellik.plaka2,
               ozellik.plaka3,
               ozellik.model,
               ozellik.renk,
               zaman.saat,
               zaman.dakika,
               zaman.saniye);
}

int main()
{
    ozellik[0].plaka1=1;
    strcpy(ozellik[0].plaka2, "A");
    ozellik[0].plaka3=101;
    strcpy(ozellik[0].model, "Lamborgini");
    strcpy(ozellik[0].renk, "Siyah");
    zaman[0].saat=6;
    zaman[0].dakika=12;
    zaman[0].saniye=58;
    ozellik[1].plaka1=2;
    strcpy(ozellik[1].plaka2, "B");
    ozellik[1].plaka3=102;
    strcpy(ozellik[1].model, "Porche");
    strcpy(ozellik[1].renk, "Kirmizi");
    zaman[1].saat=6;
    zaman[1].dakika=59;
    zaman[1].saniye=3;
    ozellik[2].plaka1=3;
    strcpy(ozellik[2].plaka2, "C");
    ozellik[2].plaka3=103;
    strcpy(ozellik[2].model, "Bugatti");
    strcpy(ozellik[2].renk, "Yesil");
    zaman[2].saat=8;
    zaman[2].dakika=0;
    zaman[2].saniye=13;
    ozellik[3].plaka1=4;
    strcpy(ozellik[3].plaka2, "D");
    ozellik[3].plaka3=104;
    strcpy(ozellik[3].model, "Mustang");
    strcpy(ozellik[3].renk, "Mor");
    zaman[3].saat=8;
    zaman[3].dakika=15;
    zaman[3].saniye=15;
    ozellik[4].plaka1=5;
    strcpy(ozellik[4].plaka2, "E");
    ozellik[4].plaka3=105;
    strcpy(ozellik[4].model, "Maserati");
    strcpy(ozellik[4].renk, "Mavi");
    zaman[4].saat=8;
    zaman[4].dakika=16;
    zaman[4].saniye=27;

    for(i=0; i<5; i++)
    {
        printf("%d. aracin;\n Plakasi: %d %s %d\n Modeli: %s\n Rengi: %s\n Giris saati: %d:%d:%d\n",
               i+1,
               ozellik[i].plaka1,
               ozellik[i].plaka2,
               ozellik[i].plaka3,
               ozellik[i].model,
               ozellik[i].renk,
               zaman[i].saat,
               zaman[i].dakika,
               zaman[i].saniye);
    }

    printf("\n*-----*----- ARAC EKLE -----*-----*\n");
    printf("\nGiris yapacak arac sayisini giriniz: ");
    scanf("%d",&j);
    printf("\n");
    j=j+5;

    for(i=5; i<j; i++)
    {
        printf("%d. aracin; \n",i+1);
        ozellik[i]=genel();
        zaman[i]=zmn();
    }
    printf("\n*-----*----- ARACLARI LISTELE -----*-----*\n\n");

    for(i=5; i<j; i++)
    {
        printf("%d. aracin; \n",i+1);
        AraclariListele(ozellik[i],zaman[i]);
    }

    return 0;
}
