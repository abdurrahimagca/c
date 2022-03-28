//ikinci dereceden denklem koku hesaplayan program
#include<stdio.h>
#include<math.h>

float kok(float a, float b, float c);

int main (void)
{
    float a,b,c=0;
    
    printf("ikinci dereceden denklem katsayilarini giriniz: ");
    
    scanf("%f%f%f", &a, &b, &c);
   
    kok(a, b, c);
    return 0;
  
}

float kok(float a, float b, float c)
{
   
    float x,y,z;
    z=(b*b)-(4*a*c);
    if (z<0)
    {
        printf("denklem kokleri gercel degildir. ");
    }

    else
    {
        x = (b+ sqrtf(z))/(2*a);
        y = (b- sqrtf(z))/(2*a);
        printf("%f %f", x, y);
    }

}