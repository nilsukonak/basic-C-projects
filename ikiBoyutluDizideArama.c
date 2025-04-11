#include <stdio.h>
#include <stdlib.h>      //kütüphaneleri tanýmladýk


#define ROWS 3 // Matris satýr sayýsý
#define COLS 3 // Matris sütun sayýsý

void searchInMatrix(int mat[][COLS], int target) {    // matris arayýcý fonksiyonu tanýmladýk.
    int i = 0, j = COLS-1;
    while (i < ROWS && j >= 0) {             // while içindeki 2 þartta saðlanýyorsa if,if else,else e bakýlabilir.
        if (mat[i][j] == target) {           // matris hedef matrise eþitse konumu bulunmuþ olur ve ekrana yazdýrýlýr.
            printf("Hedef %d, %d konumunda bulundu.", i, j);
            return;
        }
        else if (mat[i][j] > target) {    // eðer matris  deðeri hedef deðerden büyükse j deðerini 1 azaltýrýz.
            j--;
        }
        else {                          // üstteki durumlar geçerli deðilse i deðeri 1 arttýrýlýr.
            i++;
        }
    }
    printf("Hedef bulunamadý.");           // eðer while þartý saðlanmýyorsa ekrana hedef bulunamadý yazdýrýryoruz.
}

int main() {
    int mat[ROWS][COLS] = { {1, 2, 3},          // tablodaki satýr ve sütunlarý deðerleriyle tanýmaldýk.
                            {4, 5, 6},
                            {7, 8, 9} };
    int target = 5;                            // hedefi 5 olarak belirledik.
    searchInMatrix(mat, target);                 
    return 0;
}
