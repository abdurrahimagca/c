//girilen iki sayının ebob ve ekokunu bulan program
#include<stdio.h>
#include<math.h>

int ebobf(int x, int y);
int ekokf(int x, int y, int z);

int main(void)
{
    int i,x,y,ebob,ekok;
    do
    {
        printf("lutfen sifirdan buyuk ebob ve ekoklari hesaplanacak iki sayiyi giriniz: ");
        i =   scanf("%d%d", &x, &y);
        fflush(stdin);
    } while (i==0||x<=0||y<=0);
    
    
    ebob = ebobf(x,y);
    printf("ebob: %d\n", ebob);
    ekok = ekokf(x,y,ebob);
    printf("ekok: %d", ekok);
}

//öklid algoritması ile ebobu hesaplar
int ebobf(int x, int y)
{
    
do
{
   if (x>y)
    {
        x = x-y;
    }
    else if (x<y)
    {
        y = y-x;
    }
    else if (x=y)
    {
        return x;
        break;
    }
    else if (x==1||y==1)
    {
        return 1;
        break;
    }
}while(1);


}
int ekokf(int x, int y, int z)
{
  return ((x*y)/z);   
}