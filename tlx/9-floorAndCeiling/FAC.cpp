// Soal
/* Nilai floor dari sebuah bilangan riil adalah bilangan bulat terbesar yang masih lebih kecil daripada atau sama dengan bilangan tersebut.
Sebaliknya, nilai ceiling dari sebuah bilangan riil adalah bilangan bulat terkecil yang masih lebih besar daripada atau sama dengan bilangan tersebut.
Pak Dengklek memberikan Anda sebuah bilangan riil N. Tentukan nilai floor dan ceiling dari N.*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n;
    int f, c;

    cin >> n;

    f = floor(n);
    c = ceil(n);

    cout << f << " " << c << endl;

    return 0;
}
