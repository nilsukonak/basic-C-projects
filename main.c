#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	float h(float i) //h ad�nda , t�r� float olan bir fonksiyon tan�mlad�m.
	{	
		float sonuc; //sonucu float olarak tan�mlad�k.
		sonuc=0.12*i*i*i*i+ 12*i*i*i-380*i*i+ 4100*i + 220; //sonucu bulmak i�in fonksiyonumuz bu
		
		return sonuc; // de�er d�nd�ren bir fonksiyon oldu�u i�in return  kulland�k.
	}


	int main()
	{
		
		int i; // saat de�i�keni olarak tan�mlad�m. 
		for(i=1;i<=10;i++)	//i'ye s�rayla 1'den 10' a kadar de�er at�yoruz.
		{
			printf("%d.saatteki yuksekligi =%.2f\n",i,h(i));  //virg�lden sonra iki basamak g�stersin diye %.2f yazd�m.En sondada fonksiyonu �a��rd�m.
		}
	
		
	return 0;	
	}


