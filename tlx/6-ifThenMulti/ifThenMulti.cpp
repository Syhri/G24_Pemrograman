#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if (N > 0) {
        if(N % 2 == 0) {
            cout << N << endl;
        }
    }
    return 0;
}