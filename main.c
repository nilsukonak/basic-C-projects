#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand fonksiyonunu kullanabilmek i�in bu k�t�phaneyi ekledim.
int main(int argc, char *argv[]) {
	

	int sayi;
	int i=1;
	srand(time(0)); //s�rekli ayn� rastgele de�eri vermemesi i�in srand fonksiyonunu kulland�m.
	do
	{
	
		 
		sayi = rand() % 6 + 1; // rand fonksiyonu rastgele de�er vermeyi sa�lar . Burdaki say�larla 1'den 6'ya kadar rastgele de�er vermesini istedim.
        printf("%d. deneme %d\n",i,sayi);
        i++;
        

    }	 
	while(sayi!=6); //say� 6'ya ee�it olmayana kadar devam etsin.
	

	
	return 0;
}

