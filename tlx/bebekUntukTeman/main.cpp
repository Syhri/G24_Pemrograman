#include <iostream>
using namespace std;

int main()
{
    int N, M;
    int hasil;
    int mod;
    cin >> N >> M;
    hasil = N / M;
    mod = N % M;

    cout << "masing-masing " << hasil << endl;
    cout << "bersisa " << mod << endl;
    return 0;
}
