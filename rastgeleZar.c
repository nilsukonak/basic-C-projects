#include <stdio.h>
#include <stdlib.h>
#include <time.h> //srand fonksiyonunu kullanabilmek için bu kütüphaneyi ekledim.
int main(int argc, char *argv[]) {
	

	int sayi;
	int i=1;
	srand(time(0)); //sürekli aynı rastgele değeri vermemesi için srand fonksiyonunu kullandım.
	do
	{
	
		 
		sayi = rand() % 6 + 1; // rand fonksiyonu rastgele değer vermeyi sağlar . Burdaki sayılarla 1'den 6'ya kadar rastgele değer vermesini istedim.
        printf("%d. deneme %d\n",i,sayi);
        i++;
        

    }	 
	while(sayi!=6); //sayı 6'ya eeşit olmayana kadar devam etsin.
	

	
	return 0;
}

