#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Search (int D[],int N,int sayi) 
{
	
	int i =0;         // 1 kere
	while(i<N){       // n+1 kere 
		if (D[i]==sayi)break;  //while 1 kere çalıştığı zaman if,break,i++ 1 kere calışacak yani toplam 3 kere 
		i++;                   // 3*(n+1)
	}
	if (i<N)return i ; //if 1, return 1 kere çalışacak=2
	else return -1; //return 1 kere çalışacak
                          //  T(n)=4n+8 sabit sayıları atıyoruz n kalıyor. BigO'su O(n) yani cevap en iyi durum
 
}
