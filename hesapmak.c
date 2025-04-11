#include <stdio.h>
#include <stdlib.h>
#include <math.h >
#define PI 3.14 //dairenin �evresini ve alan�n� bulmak i�in pi yi tan�ml�yoruz.

void basithspmak()
{
	int secim1,secim2; // Say� t�r� ve i�lem t�r� i�in tan�mlanan de�i�kenler
	int sayi1,sayi2;   //Say�n�n reel k�s�mlar�   
	int sanal1,sanal2; //Say�n�n sanal k�s�mlar�
	
	printf(" sayinin turunu seciniz:\n ");
	printf("1. tamsayi\n 2.karmasik sayi\n");
	scanf("%d",&secim1);   
	
	if(secim1==1)   // e�er ki�i tam say� t�r�n� se�erse
	{ 
	printf("hangi hesaplama turunu yapacaginizi giriniz\n");
	printf("1. toplama \n2.carpma\n");
	scanf("%d",&secim2); //i�lemi se�mek i�in
	printf("\n");     //bo�luk b�rakmak i�in
    
	if(secim2==1)  //E�er ki�i Toplama i�lemini se�erse
	{
		printf("1. ve 2. sayilari giriniz\n");
		scanf("%d%d",&sayi1 ,&sayi2); //kullan�c�dan iki tane say� ald�k
		printf(" sayilarin toplami = %d",sayi1+sayi2); 
	}

    else if(secim2==2)  //E�er ki�i �arpma i�lemini se�erse
	 {
		printf("1. ve 2. sayilari giriniz");
		scanf("%d%d",&sayi1,&sayi2);  //kullan�c�dan iki tane say� ald�k
		printf(" sayilarin carpimi = %d",sayi1*sayi2);	
	 }
	 
	else
	{
		printf("HATA!!"); // yanl�� say� girince ekrana verilen mesaj
	}		
	
}
	
	else if(secim1==2)
	{
		printf("yapilacak olan islemi giriniz\n 1.toplama\n 2.carpma\n"); //i�lem t�r�n� se�iniz
		scanf("%d",&secim2);
		
		if(secim2==1)
		{
			printf("ilk sayinin once reel sonra sanal kismini giriniz\n");
			scanf("%d%d",&sayi1,&sanal1); //kullan�c�dan reel ve sanal k�s�mlar� ald�k
			printf("ikinci sayinin once reel sonra sanal kismini giriniz\n");
			scanf("%d%d",&sayi2,&sanal2);  //kullan�c�dan 2. say�n�n reel ve sanal k�s�mlar� ald�k
			printf("iki sayini toplam� = %d + (%d)i",sayi1+sayi2,sanal1+sanal2);
		}
		else if(secim2==2)
		{
			printf("ilk sayinin once reel sonra sanal kismini giriniz\n");
			scanf("%d%d",&sayi1,&sanal1);
			printf("ikinci sayinin once reel sonra sanal kismini giriniz\n");
			scanf("%d%d",&sayi2,&sanal2);
			printf("iki sayini carpimi = %d + (%d)i",(sayi1*sayi2)-(sanal1*sanal2),(sayi1*sanal2)+(sanal1*sayi2));	
		}
		else
		{
			printf("HATA!!!"); // yanl�� say� girince ekrana verilen mesaj
		}
	}
	
	
	
}

  void alancevrehesaplayici()
  {
  
  int cevre,alan,secenek;
  
  printf(" bir sekil seciniz \n1.dikdortgen \n2.daire\n3.ucgen\n ");
  scanf("%d",&secenek); //kullan�c�dan se�enek girmesini istedik
   if(secenek==1)      // E�er kullan�c� se�enek 1 i yani dikd�rtgeni se�erse
   {
   	int kisaKenar,uzunKenar;
   	printf("dikdortgenin once kisa degerini daha sonra uzun degerini giriniz\n");
   	scanf("%d%d",&kisaKenar,&uzunKenar);
   	
   	printf("dikdortgenin cevresi: %d",kisaKenar*2+uzunKenar*2);
   	printf("\ndikdortgenin alani : %d",kisaKenar*uzunKenar);
   	 }
   	 
   	 else if(secenek==2)    //E�er kullan�c� se�enek 2yi yani daireyi se�erse
   	 {
   	 	int yariCap,alan,cevre;
   	 	printf("dairenin yaricapini giriniz\n");
   	 	scanf("%d",&yariCap);
   	 	
   	 	printf("dairenin cevresi:%f\n",2*PI*yariCap);
   	 	printf("dairenin alani:%f",PI*yariCap*yariCap); //alan ve cevre hesaplama form�lleri
		}
	
	else if(secenek==3) //E�er kullan�c� se�enek 3� yani ��geni se�erse
	{

		int s,kenarA,kenarB,kenarC,alan;
		
		printf("ucgenin kenarlarini giriniz:\n");
		scanf("%d%d%d",&kenarA,&kenarB,&kenarC);         //kullan�c�dan 3 adet kenar de�eri girmesini istedik
		s = (kenarA+kenarB+kenarC)/2;                    //heron form�l�n� kullanmak i�in de�i�ken tan�ml�yoruz
		alan = sqrt(s*(s-kenarA)*(s-kenarB)*(s-kenarC));  //��genin alan�n� hesaplamak i�in heron fom�l�n� tan�ml�yorz
	
		
		printf("ucgenin cevresi:%d",kenarA+kenarB+kenarC);      //kenarlar�n tooplam� cevreyi verir
		printf("\nucgenin alani: %d",alan);
	
		}
    else
    {
    	printf("HATA!!!"); //kullan�c� yanl�s de�er girerse uyar� olarak 
	}

}

	void sicaklikhesaplayici()
{
		int secim; //kullan�c�dan de�er almal i�in 
		float derece;
		printf("yapmak istediginiz islemin numarasini giriniz:\n");
		printf("1. Fahrenheit'ten Kelvin'e \n2.Kelvin'den Fahrenheit'e\n");
		scanf("%d",&secim);
		
		
	if(secim==1)	
	 {
		printf("Fahrenheit degerini giriniz:");
		scanf("%f",&derece);
	    printf("Sonuc = %f",((5.0/9.0)*(derece-32.0))+273.15);
	    
	 }
	else if(secim==2)
	 {
		printf("kelvin degerini giriniz:");
		scanf("%f",&derece);
	    printf("Sonuc = %f",((9.0/5.0)*(derece-273.15))+32.0);
	 }
	else
	 {
		printf("yanlis secim yaptiniz");
	 }
	
}












int main(int argc, char *argv[]) {
	
	printf("COKLU HESAP MAKINESI "); //ba�l�k
	printf("\n\n\n");
	int tur; //t�r de�i�kenini tan�mlad�k
	printf("Hesap makinesi turunu giriniz!\n1.BASIT HESAP MAKINESI \n2.ALAN CEVRE HESAPLAYICI\n3.SICAKLIK HESAPLAYICI \n ");
	scanf("%d",&tur);
	
	switch(tur)     //girilen say�ya g�re fonksiyon �a��r�l�r.
	{
		case 1:
		basithspmak();
		break;
		
		case 2:
		alancevrehesaplayici();
		break;
		
		case 3:
		sicaklikhesaplayici();
		break;
		
		default:
		printf("HATA!!"); // kullan�c� burda olmayan bir say� girdi�inde hata vermesi i�in
		break;
	}
	
	
	

	
	
	return 0;
}
