/* SOAL
DESKRIPSI
Pak Dengklek memiliki N buah kandang bebek, dinomori dari 1 sampai dengan N. 
Kandang ke-i berisi Bi ekor bebek. Berapa banyaknya total bebek yang Pak Dengklek miliki?

FORMAT MASUKAN
Baris pertama berisi sebuah bilangan bulat N. Baris kedua berisi N buah bilangan bulat B1, B2, ..., BN.

FORMAT KELUARAN
Sebuah baris berisi sebuah bilangan bulat yang merupakan banyaknya total bebek.
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int hasil = 0;
    for (int i = 0; i < n; i++) {
        int b[i];
        cin >> b[i];
        hasil += b[i];
    }
    cout << hasil << endl;

    cin.get();
    return 0;
}
