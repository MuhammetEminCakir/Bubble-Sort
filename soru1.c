#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int i, j=0, k=0;

    int dizi[10];
    int diziCift[10];
    int diziTek[10];

    int *diziPtr;
    int *diziCiftPtr;
    int *diziTekPtr;

    diziPtr=dizi;
    diziCiftPtr=diziCift;
    diziTekPtr=diziTek;

    for(i=0; i<10; i++)
    {
        dizi[i]=1+rand()%100;
        printf("Atanan %2d. sayi= %d\n",(i+1) ,*(diziPtr+i));
    }
    printf("*-----*-----*-----*-----*-----*\n");

    for(i=0; i<10; i++)
    {
        if(dizi[i]%2==0)
        {
            diziCift[j]=dizi[i];
            j++;
        }

        else
        {
            diziTek[k]=dizi[i];
            k++;
        }
    }

    printf("Cift Sayilar\n");
    for(i=0; i<10; i++)
    {
        if(*(diziCiftPtr+i)>=1 && *(diziCiftPtr+i)<=100)
            printf("%d\n",*(diziCiftPtr+i));

        else
            continue;
    }

    printf("\nTek Sayilar\n");
    for(i=0; i<10; i++)
    {
        if(*(diziTekPtr+i)>=1 && *(diziTekPtr+i)<=100)
            printf("%d\n",*(diziTekPtr+i));

        else
            break;
    }
    return 0;
}
