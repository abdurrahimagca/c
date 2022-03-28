/*100‟lük sisteme göre girilen başarı notunu harfli sisteme çeviren
program, if else ile*/
/*100‟lük sisteme göre girilen başarı notunu harfli sisteme çeviren
program*/
#include<stdio.h>
#include<math.h>
#include<ctype.h>


int main (void)
{
  
    float grade;
    int i;
    
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
    
    if (grade>90 && grade<100)
        printf("\nHarf Notu:AA\nDurum: basarili\n\n");
    
    else if (grade>85 && grade<89)
        printf("\nHarf Notu: BA\nDurum: basarili\n\n"); 
    
    else if (grade>80 && grade<84)
        printf("\nHarf Notu: BB\nDurum: basarili\n\n");
    
    else if (grade>75 && grade<79)
        printf("\nHarf Notu: CB\nDurum: basarili\n\n");
    
    else if (grade>69 && grade<74)
        printf("\nHarf Notu: CC\nDurum: basarili\n\n");
    
    else if (grade>60 && grade<68)
       printf("\nHarf Notu: DC\nDurum: basarili\n\n"); 
    
    else if (grade>55 && grade<59)
         printf("\nHarf Notu: DD\nDurum: basarisiz\n\n");
    
    else if (grade>50 && grade<54)
        printf("\nHarf Notu: FD\nDurum: basarisiz\n\n");
    
    else if (grade>1 && grade<49)
        printf("\nHarf Notu: FF\nDurum: basarisiz\n\n");
    
    else
        printf("\nDevamsiz\nDurum: basarisiz\n\n");

return 0;
}