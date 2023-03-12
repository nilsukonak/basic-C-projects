#include <stdio.h>
#include <stdlib.h>
#define elemansayi 3 //dizinin  kaç elemandan oluþacaðýný tanýmladýk (kod çalýþsýn diye)

void Minbulucu(int dizi[]){
     int i,min;

    
      min = dizi[0];
   
     for(i=0 ; i<elemansayi ; i++){         //i=0 için 1 kere calýþacak , i<elemansayýsý eleman sayýsýnýn bir fazlasý kadar (n+1) yani 4 kere ,i++ eleman sayýsý kadar(n) 3 kere 
          
		  if(min > dizi[i])                // eleman sayýsý kadar calýsacak (n)yani 3 kere
               min = dizi[i];              // 1 kere çalýþacak
		    
     }
     printf("dizideki en kucuk eleman : %d\n", min);       // 1 kere calýþacak

                        // n+(n+1)+1+n+1+1=3n+4
                        //T(n)=3n+4 
}                      

int main(){
     int sayilar[elemansayi];
     int i ;
     for(i=0 ; i<elemansayi ; i++){
          printf("%d. sayiyi giriniz : ",i+1);
          scanf("%d", &sayilar[i]);
     }

    Minbulucu(sayilar);
}
