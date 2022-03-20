#include<stdio.h>

int main(void)
{
    float i;
    float r;

    printf("lutfen SIRAYLA amper turunde akim (I) iletken uzerinde var olan direncin (R) degerlerini giriniz: \n ");
    scanf("%f %f", &i, &r);
    printf("kutuplar arasi gerilim: %.2f'dir. ", (i*r));
}