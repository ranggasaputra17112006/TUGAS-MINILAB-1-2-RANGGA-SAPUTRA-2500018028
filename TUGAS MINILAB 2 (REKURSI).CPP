#include <iostream>
using namespace std;

long long pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return a * pangkat(a, b - 1);
}
int main() {
    int a, b;
    cout << "Masukkan angka: ";
    cin >> a;
    cout << "Masukkan angka eksponen: ";
    cin >> b;
    
    if (b < 0) {
        cout << "Eksponen harus non-negatif." <<endl;
        return 1;
    }
    
    long long hasil = pangkat(a, b);
    cout << a << "^" << b << " = " << hasil << endl;
    return 0;
}

