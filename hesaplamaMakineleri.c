#include <stdio.h>
#include <stdlib.h>
#include <math.h >
#define PI 3.14 //dairenin çevresini ve alanını bulmak için pi yi tanımlıyoruz.

void basithspmak()
{
	int secim1,secim2; // Sayı türü ve işlem türü için tanımlanan değişkenler
	int sayi1,sayi2;   //Sayının reel kısımları   
	int sanal1,sanal2; //Sayının sanal kısımları
	
	printf(" sayinin turunu seciniz:\n ");
	printf("1. tamsayi\n 2.karmasik sayi\n");
	scanf("%d",&secim1);   
	
	if(secim1==1)   // eğer kişi tam sayı türünü seçerse
	{ 
	printf("hangi hesaplama turunu yapacaginizi giriniz\n");
	printf("1. toplama \n2.carpma\n");
	scanf("%d",&secim2); //işlemi seçmek için
	printf("\n");     //boşluk bırakmak için
    
	if(secim2==1)  //Eğer kişi Toplama işlemini seçerse
	{
		printf("1. ve 2. sayilari giriniz\n");
		scanf("%d%d",&sayi1 ,&sayi2); //kullanıcıdan iki tane sayı aldık
		printf(" sayilarin toplami = %d",sayi1+sayi2); 
	}

    else if(secim2==2)  //Eğer kişi çarpma işlemini seçerse
	 {
		printf("1. ve 2. sayilari giriniz");
		scanf("%d%d",&sayi1,&sayi2);  //kullanıcıdan iki tane sayı aldık
		printf(" sayilarin carpimi = %d",sayi1*sayi2);	
	 }
	 
	else
	{
		printf("HATA!!"); // yanlış sayı girince ekrana verilen mesaj
	}		
	
}
	
	else if(secim1==2)
	{
		printf("yapilacak olan islemi giriniz\n 1.toplama\n 2.carpma\n"); //işlem türünü seçiniz
		scanf("%d",&secim2);
		
		if(secim2==1)
		{
			printf("ilk sayinin once reel sonra sanal kismini giriniz\n");
			scanf("%d%d",&sayi1,&sanal1); //kullanıcıdan reel ve sanal kısımları aldık
			printf("ikinci sayinin once reel sonra sanal kismini giriniz\n");
			scanf("%d%d",&sayi2,&sanal2);  //kullanıcıdan 2. sayının reel ve sanal kısımları aldık
			printf("iki sayini toplamı = %d + (%d)i",sayi1+sayi2,sanal1+sanal2);
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
			printf("HATA!!!"); // yanlış sayı girince ekrana verilen mesaj
		}
	}
	
	
	
}

  void alancevrehesaplayici()
  {
  
  int cevre,alan,secenek;
  
  printf(" bir sekil seciniz \n1.dikdortgen \n2.daire\n3.ucgen\n ");
  scanf("%d",&secenek); //kullanıcıdan seçenek girmesini istedik
   if(secenek==1)      // Eğer kullanıcı seçenek 1 i yani dikdörtgeni seçerse
   {
   	int kisaKenar,uzunKenar;
   	printf("dikdortgenin once kisa degerini daha sonra uzun degerini giriniz\n");
   	scanf("%d%d",&kisaKenar,&uzunKenar);
   	
   	printf("dikdortgenin cevresi: %d",kisaKenar*2+uzunKenar*2);
   	printf("\ndikdortgenin alani : %d",kisaKenar*uzunKenar);
   	 }
   	 
   	 else if(secenek==2)    //Eğer kullanıcı seçenek 2yi yani daireyi seçerse
   	 {
   	 	int yariCap,alan,cevre;
   	 	printf("dairenin yaricapini giriniz\n");
   	 	scanf("%d",&yariCap);
   	 	
   	 	printf("dairenin cevresi:%f\n",2*PI*yariCap);
   	 	printf("dairenin alani:%f",PI*yariCap*yariCap); //alan ve cevre hesaplama formülleri
		}
	
	else if(secenek==3) //Eğer kullanıcı seçenek 3ü yani üçgeni seçerse
	{

		int s,kenarA,kenarB,kenarC,alan;
		
		printf("ucgenin kenarlarini giriniz:\n");
		scanf("%d%d%d",&kenarA,&kenarB,&kenarC);         //kullanıcıdan 3 adet kenar değeri girmesini istedik
		s = (kenarA+kenarB+kenarC)/2;                    //heron formülünü kullanmak için değişken tanımlıyoruz
		alan = sqrt(s*(s-kenarA)*(s-kenarB)*(s-kenarC));  //üçgenin alanını hesaplamak için heron fomülünü tanımlıyorz
	
		
		printf("ucgenin cevresi:%d",kenarA+kenarB+kenarC);      //kenarların tooplamı cevreyi verir
		printf("\nucgenin alani: %d",alan);
	
		}
    else
    {
    	printf("HATA!!!"); //kullanıcı yanlıs değer girerse uyarı olarak 
	}

}

	void sicaklikhesaplayici()
{
		int secim; //kullanıcıdan değer almal için 
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
	
	printf("COKLU HESAP MAKINESI "); //başlık
	printf("\n\n\n");
	int tur; //tür değişkenini tanımladık
	printf("Hesap makinesi turunu giriniz!\n1.BASIT HESAP MAKINESI \n2.ALAN CEVRE HESAPLAYICI\n3.SICAKLIK HESAPLAYICI \n ");
	scanf("%d",&tur);
	
	switch(tur)     //girilen sayıya göre fonksiyon çağırılır.
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
		printf("HATA!!"); // kullanıcı burda olmayan bir sayı girdiğinde hata vermesi için
		break;
	}
	
	
	

	
	
	return 0;
}
