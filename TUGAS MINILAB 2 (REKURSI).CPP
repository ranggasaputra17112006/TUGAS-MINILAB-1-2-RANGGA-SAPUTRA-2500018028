#include <iostream>
using namespace std;

long long power(int a, int b) {
    if (b == 0) {
        return 1;
    }
    return a * power(a, b - 1);
}
int main() {
    int a, b;
    cout << "Masukkan angka basis: ";
    cin >> a;
    cout << "Masukkan angka eksponen: ";
    cin >> b;
    
    if (b < 0) {
        cout << "Eksponen harus non-negatif." <<endl;
        return 1;
    }
    
    long long result = power(a, b);
    cout << a << "^" << b << " = " << result << endl;
    return 0;
}


