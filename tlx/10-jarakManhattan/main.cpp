// SOAL
/*Jarak Manhattan adalah jarak dari suatu titik menuju suatu titik lainnya pada suatu sistem koordinat Kartesius dengan menyusuri 
bagian vertikal dan horizontal, tanpa pernah kembali. Secara sederhana, sama dengan jumlah dari selisih absis dan selisih ordinat. 
Dengan kata lain, jarak Manhattan = |x1 - x2| + |y1 - y2|. Pak Dengklek ingin pergi dari koordinat (x1, y1) menuju (x2, y2). 
Tentukan jarak Manhattan yang harus ditempuh Pak Dengklek.*/

#include <iostream>

using namespace std;

int main()
{
    int x1, y1;
    int x2, y2;
    int jarak_x, jarak_y;

    cin >> x1 >> y1 >> x2 >> y2;

    jarak_x = x1 - x2;
    jarak_y = y1 - y2;

    if (jarak_x < 0) {
        jarak_x = jarak_x * -1;
    }
    if (jarak_y < 0) {
        jarak_y = jarak_y * -1;
    }

    int result = jarak_x + jarak_y;

    cout << result << endl;
    return 0;
}
