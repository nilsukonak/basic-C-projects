#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	float h(float i) //h adýnda , türü float olan bir fonksiyon tanýmladým.
	{	
		float sonuc; //sonucu float olarak tanýmladýk.
		sonuc=0.12*i*i*i*i+ 12*i*i*i-380*i*i+ 4100*i + 220; //sonucu bulmak için fonksiyonumuz bu
		
		return sonuc; // deðer döndüren bir fonksiyon olduðu için return  kullandýk.
	}


	int main()
	{
		
		int i; // saat deðiþkeni olarak tanýmladým. 
		for(i=1;i<=10;i++)	//i'ye sýrayla 1'den 10' a kadar deðer atýyoruz.
		{
			printf("%d.saatteki yuksekligi =%.2f\n",i,h(i));  //virgülden sonra iki basamak göstersin diye %.2f yazdým.En sondada fonksiyonu çaðýrdým.
		}
	
		
	return 0;	
	}


