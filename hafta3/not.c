/*100‟lük sisteme göre girilen başarı notunu harfli sisteme çeviren
program*/
#include<stdio.h>
#include<math.h>
#include<ctype.h>


int main (void)
{
  
    float grade;
    int i, check;
    
    //istenen aralikta deger girilmedigi surece degerin istenmesini saglar
   do
    {
        printf("Lutfen notunuzu giriniz: ");
        i = scanf("%f", &grade); 
        //sonsuz donguye girilmesini engeller
             fflush(stdin);
            if (i!=0 && grade>0 && grade<100)
                break;
            else
            {
                //istenen aralikta deger girilmediginde kullaniciyi uyarır
                 printf("\nHatali not girisi lutfen 0-100 arasinda ve numerik bir deger giriniz...!\n");
            }  
    } while (1);
    
    //49.4 49 iken 49.5'in 50 olarak degerlendirilmesini saglar, switch case int girdi kabul ettiğinden.
    check = round(grade);
    
    switch (check)
    {
    case 90 ... 100:
        printf("\nHarf Notu:AA\nDurum: basarili\n\n");
        break;

    case 85 ... 89:
        printf("\nHarf Notu: BA\nDurum: basarili\n\n"); 
        break; 

    case 80 ... 84:
        printf("\nHarf Notu: BB\nDurum: basarili\n\n");
        break;
    
    case 75 ... 79:
        printf("\nHarf Notu: CB\nDurum: basarili\n\n");
        break;
    
    case 69 ... 74:
        printf("\nHarf Notu: CC\nDurum: basarili\n\n");
        break;

    case 60 ... 68:
         printf("\nHarf Notu: DC\nDurum: basarili\n\n");
        break;
    
    case 55 ... 59:
         printf("\nHarf Notu: DD\nDurum: basarisiz\n\n");
        break;
    
    case 50 ... 54:
         printf("\nHarf Notu: FD\nDurum: basarisiz\n\n");
        break;
    
    case 1 ... 49:
        printf("\nHarf Notu: FF\nDurum: basarisiz\n\n");
        break;

    case 0:
       printf("\nDevamsiz\nDurum: basarisiz\n\n");
        break;
    
     default:
           return 1;
            
    }
    
return 0;
}