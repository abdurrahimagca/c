#include<stdio.h>

int main (void)
{
    int alan;
    int cevre;
    int yaricap;
    const int pi = 3;

    printf("yaricapi giriniz: ");
    scanf("%d", &yaricap);

    cevre = 2*pi*yaricap;
    alan = pi*yaricap*yaricap;

    printf("cevre: %d\nalan: %d", cevre, alan);
    

}