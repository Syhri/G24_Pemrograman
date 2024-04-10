#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
/*    cin >> n;

    // ALGORITMA for BIASA
    for (int i = 0; i <= n; i++) {
        cout << "tulisan ini dicetak saat i = " << i << endl;
    }
    printf("\n");

    // ALGORITMA for TERBALIK
    for (int i = n - 1; i >= 0; i--) {
        cout << "tulisan ini dicetak saat i = " << i << endl;
    }
    printf("\n");

    // ALGORITMA for YANG LOMPATANNYA 2
    for (int i = 0; i < n; i += 2) {
        cout << "tulisan ini dicetak saat i = " << i << endl;
    }
    printf("\n");

    // ALGORITMA for TIDAK TERBATAS PADA PENJUMLAHAN
    for (int i = 0; i <= n; i *= 2) {
        cout << "tulisan ini dicetak saat i = " << i << endl;
    }
    printf("\n");
    cout << "akhir dari program\n";*/

    // ALGORITMA for UNTUK MENJUMLAHKAN SELURUH BILANGAN DI ANTARA DUA BILANGAN
    int awal, akhir;
    cin >> awal >> akhir;

    int jumlah = 0;
    for (int i = awal; i <= akhir; i++) {
        jumlah += 1;
    }
    printf("jumlah bilangan bulat di antara %d dan %d (inklusif) adalah %d\n", awal, akhir, jumlah);
    
    return 0;
}
