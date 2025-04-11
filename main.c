#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand fonksiyonunu kullanabilmek için bu kütüphaneyi ekledim.
int main(int argc, char *argv[]) {
	

	int sayi;
	int i=1;
	srand(time(0)); //sürekli ayný rastgele deðeri vermemesi için srand fonksiyonunu kullandým.
	do
	{
	
		 
		sayi = rand() % 6 + 1; // rand fonksiyonu rastgele deðer vermeyi saðlar . Burdaki sayýlarla 1'den 6'ya kadar rastgele deðer vermesini istedim.
        printf("%d. deneme %d\n",i,sayi);
        i++;
        

    }	 
	while(sayi!=6); //sayý 6'ya eeþit olmayana kadar devam etsin.
	

	
	return 0;
}

