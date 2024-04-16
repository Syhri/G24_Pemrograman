/**
DESKRIPSI
Di samping memelihara bebek, Pak Dengklek pun memiliki seekor burung beo kesayangan. Burung beo ini 
selalu mengulangi secara persis apapun ucapan yang dilontarkan kepadanya.Pak Dengklek iseng-iseng 
ingin memiliki sebuah program komputer yang menirukan sifat burung beo tersebut. Ia ingin memiliki 
program yang menerima beberapa kata, kemudian mencetak kembali semua kata tersebut secara persis.
Bantulah Pak Dengklek membuat program tersebut.

FORMAT MASUKAN
Beberapa baris, masing-masing berisi sebuah kata. Perhatikan bahwa banyaknya baris tidak diberikan kepada Anda. 
Anda harus membaca baris-baris sampai masukan habis. Lihat bagian Petunjuk untuk lebih jelasnya.

FORMAT KELUARAN
Sejumlah baris yang sama persis dengan masukan.
*/

#include <iostream>

using namespace std;

int main()
{
    char masukan[101];
    while (scanf("%s", masukan) != EOF) {
        cout << masukan << endl;
    }
}
