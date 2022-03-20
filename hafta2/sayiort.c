#include<stdio.h>

int main (void)
{
    float i,j,k,l,m;

    printf("lutfen sirayla ortalamasini hesaplamak istediginiz sayilari giriniz: ");
    scanf("%f%f%f%f%f", &i, &j, &k, &l, &m);
    printf("ort: %.2f", ((i+j+k+l+m)/5));
    
}