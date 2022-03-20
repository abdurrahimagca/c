#include<stdio.h>

int main(void)
{
   int v;
   int f;
   int p;
   float ort;

   printf("vize notunuz: ");
   scanf("%d", &v);

   printf("\nfinal notunuz: ");
   scanf("%d", &f);

   printf("\nproje notunuz: ");
   scanf("%d", &p);

   ort = ((v*3/10)+(p*2/10)+(f*1/2)); 
   printf("ortalama: %.2f", ort);
}