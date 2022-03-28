//47-121 arasındaki 5 ve 3'ün katlarını ekrana basan program.
#include<stdio.h>

int main(void)
{
    for (int i = 47; i < 122; i++)
    {
        if (i%3==0 || i%5==0)
        {
            printf("%d\n", i);
        }
        
    }
 return 0;   
}