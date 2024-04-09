#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N < 10) {
        cout << "satuan" << endl;
    } else if (N < 100) {
        cout << "puluhan" << endl;
    } else if (N < 1000) {
        cout << "ratusan" << endl;
    } else if (N < 10000) {
        cout << "ribuan" << endl;
    } else if (N < 100000) {
        cout << "puluhribuan" << endl;
    }
    return 0;
}
