#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




typedef struct kisi{
	char adsoyad[40];	
	int numara;
	int yas;
	char adres[40];
	
}kisi;


int main() {
	
	kisi kisi1;
	strcpy(kisi1.adsoyad,"NilsuKonak");
	kisi1.numara=100;
	kisi1.yas=18;
    strcpy(kisi1.adres,"bursa");
 
    printf("1. ogrencinin bilgileri:\n");
    printf(" adi soyadi :%s\n numara:%d\n yasi:%d\n adresi:%s\n\n",kisi1.adsoyad,kisi1.numara,kisi1.yas,kisi1.adres);
    
    
    kisi kisi2;
	strcpy(kisi2.adsoyad,"MelikeAtalay");
	kisi2.numara=101;
	kisi1.yas=20;
    strcpy(kisi2.adres,"istanbul");
 
    printf("2. ogrencinin bilgileri:\n");
    printf(" adi soyadi :%s\n numara:%d\n yasi:%d\n adresi:%s\n\n",kisi2.adsoyad,kisi2.numara,kisi2.yas,kisi2.adres);
    
    
    kisi kisi3;
	strcpy(kisi3.adsoyad,"NisaOzlu");
	kisi3.numara=103;
	kisi3.yas=18;
    strcpy(kisi3.adres,"bursa");
 
    printf("3. ogrencinin bilgileri:\n");
    printf(" adi soyadi :%s\n numara:%d\n yasi:%d\n adresi:%s\n\n",kisi3.adsoyad,kisi3.numara,kisi3.yas,kisi3.adres);
    

	kisi kisi4;
	strcpy(kisi4.adsoyad,"ToprakKorulu");
	kisi4.numara=104;
	kisi4.yas=15;
    strcpy(kisi4.adres,"hatay");
 
    printf("4. ogrencinin bilgileri:\n");
    printf(" adi soyadi :%s\n numara:%d\n yasi:%d\n adresi:%s\n\n",kisi4.adsoyad,kisi4.numara,kisi4.yas,kisi4.adres);
    
    kisi kisi5;
    strcpy(kisi5.adsoyad,"OzanTuna");
	kisi5.numara=105;
	kisi5.yas=20;
    strcpy(kisi5.adres,"Trabzon");
 
    printf("5. ogrencinin bilgileri:\n");
    printf(" adi soyadi :%s\n numara:%d\n yasi:%d\n adresi:%s\n",kisi5.adsoyad,kisi5.numara,kisi5.yas,kisi5.adres);
    	
	return 0;
}
