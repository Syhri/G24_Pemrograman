#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    do {
        cout << "tulisan ini dicetak saat i = " << i << endl;
        i++;
    } while (i < n);
    cout << "akhir dari program\n";
}