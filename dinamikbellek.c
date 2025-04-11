// Bellek Kullanımını Optimize Etme: Gerekli olan kadar bellek ayırabilir ve iş bitiminde serbest bırakabilirsiniz Bu, bellek israfını önler.
/*Dinamik Veri Yapıları: Liste, kuyruk, yığın gibi veri yapıları oluşturulabilir ve bellek gereksinimlerine göre yönetilebilir.
Nasıl Kullanılır?
Dinamik bellek ayırma işlemi malloc, calloc, realloc, ve free gibi fonksiyonlarla yapılır.

malloc(size_t size): Belirtilen boyutta bellek ayırır. size ile belirtilen boyutta bir bellek bloğu döner.
calloc(size_t num, size_t size): Belirtilen sayıda ve boyutta bellek bloğu ayırır ve her bloğu sıfırla.
realloc(void *ptr, size_t size): Daha önce ayrılmış olan belleği yeniden boyutlandırır.
free(void *ptr): Daha önce ayrılmış olan belleği serbest bırakır.

Pointer (işaretçi), bir değişkenin bellekteki adresini saklayan bir değişkendir. Başka bir deyişle, işaretçi bir değişkenin veya bellek bloğunun başlangıç adresini tutar.

Neden Kullanılır?
Bellek Yönetimi: Bellekteki spesifik adreslere doğrudan erişim sağlar. Bu, bellek üzerinde daha düşük seviyede kontrol sağlar.
Dinamik Bellek Kullanımı: Dinamik olarak ayrılmış bellek bloklarına erişmek için kullanılır.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;     // İşaretçi tanımlanıyor
    int size = 5; // Dizinin boyutu BUNU DİNAMİK OLARAK AYARLAYABİLMRK ÖNEMLİİ

    // Dinamik bellek ayırma
    arr = (int *)malloc(size * sizeof(int)); // 5 * 4 byte (int boyutu) = 20 byte ayır   calloc dersemde aynı cıktıyı alırım sadece callocun farkı o verilen degerler basta 0dır yani baslangıcta egerlern 0 olması gerektgi durumlardacalloc kullanılır
    if (arr == NULL)
    { // Bellek ayırma başarılı mı kontrol et
        printf("Bellek ayırma hatası.\n");
        return 1; // Bellek ayırma hatası durumunda çıkış
    }
    else
    {
        printf("bellek ayırma baasarılı \n");
    }
    // Diziyi doldurma
    for (int i = 0; i < size; i++)
    {
        arr[i] = i * 10; // Her bir elemanı 0, 10, 20, 30, 40 olarak ayarla
    }

    // Diziyi ekrana yazdırma
    printf("\n Dizi elemanları:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Her bir elemanı ekrana yazdır
    }
    printf("\n");
    /*       // Belleği yeniden boyutlandırma REALLOC KULLANIMI
      size = 10; // Yeni boyut
      arr = (int *)realloc(arr, size * sizeof(int));
      if (arr == NULL) {
          printf("Bellek yeniden boyutlandırma hatası.\n");
          return 1;
      }

      // Yeni diziyi doldurma
      for (int i = 5; i < size; i++) {
          arr[i] = i * 10;
      }                */

    // Belleği serbest bırakma
    free(arr); // Dinamik olarak ayrılan belleği serbest bırak

    return 0; // Programı başarıyla bitir
}
