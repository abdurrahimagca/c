//küre hacmini hesaplayan program
#include<stdio.h>

int main (void)
{
    const float pi = 3.14;
    float r;
    float hacim;

    printf("lutfen kurenin yaricapini(sifirdan buyuk olmalidir) yaziniz:\n");
    scanf("%f", &r);
    //sıfır veya kucuk deger yazıldı ise programdan çıkışı sağlar
    if(r<=0)
        return 1;

    printf("hacim: %.2f", (4*pi*r*r*r/3));
    
    return 0;

}