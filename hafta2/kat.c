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