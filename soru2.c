#include <stdio.h>
#include <stdlib.h>
#define elemansayi 3 //dizinin  ka� elemandan olu�aca��n� tan�mlad�k (kod �al��s�n diye)

void Minbulucu(int dizi[]){
     int i,min;

    
      min = dizi[0];
   
     for(i=0 ; i<elemansayi ; i++){         //i=0 i�in 1 kere cal��acak , i<elemansay�s� eleman say�s�n�n bir fazlas� kadar (n+1) yani 4 kere ,i++ eleman say�s� kadar(n) 3 kere 
          
		  if(min > dizi[i])                // eleman say�s� kadar cal�sacak (n)yani 3 kere
               min = dizi[i];              // 1 kere �al��acak
		    
     }
     printf("dizideki en kucuk eleman : %d\n", min);       // 1 kere cal��acak

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
