#include<stdio.h>

int main (void)
{
    const float pi = 3.14;
    float r;
    float hacim;

    printf("lutfen yaricapini yaziniz:\n");
    scanf("%f", &r);

    printf("hacim: %.2f", (4*pi*r*r*r/3));
    
    return 0;

}