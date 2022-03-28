//Bir kişinin ideal kilosunu hesaplayan program
     #include<stdio.h>
     #include<math.h>

    int main (void)
    {
        float kilo,ideal;
        int i, j, boy;
        do
        {
        printf("Lutfen kg cinsinden kilonuzu giriniz: ");
        i = scanf("%f", &kilo); 
        printf("Lutfen cm cinsinden boyunuzu giriniz: ");
        i = scanf("%d", &boy);
        printf("Lutfen erkek icin 0 kadin icin 1 olmak uzre cinsiyetinizi giriniz: ");
        i = scanf("%f", &j);
        //sonsuz donguye girilmesini engeller
         fflush(stdin);
            if (i!=0 && (j==0||j==1))
                break;
            else
            {
                //istenen aralikta deger girilmediginde kullaniciyi uyarır
                 printf("\nlutfen numerik degerler giriniz ve cinsiyetinizi dogru belirttiginizden emin olunuz...\n\n");
            }  
        } while (1);

        switch (j)
        {
        case 1:
            {
                ideal = 45.5 + 2.3*((boy/2.54)-60);
                i = round(ideal);
            }
        
        case 0:
        {
            ideal = 50 + 2.3*((boy/2.54)-60);
            i = round(ideal);
        }

        printf("ideal kilonuz: %d\nideal kilonuzdan %.0f uzaktasiniz.", i, (kilo-ideal));

        }    

    }
