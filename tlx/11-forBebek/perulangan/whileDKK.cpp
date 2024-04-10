#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // CONTOH PENGGUNAAN while UNTUK KASUS YANG SAMA DENGAN for
    int i = 0; 
    while (i < n) {
        cout << "tulisan ini dicetak saat i = " << i << endl;
        i++; 
    }
    cout << "akhir dari program\n";

    // ALGORITMA YANG SAMA DENGAN forsum
    int awal, akhir;
    cin >> awal >> akhir;

    int jml = 0;
    int i = awal;
    while (i < akhir) {
        jml += 1;
        i++;
    }
    printf("jumlah bilangan bulat di antara %d dan %d (inklusif) adalah %d\n", awal, akhir, jml);
}