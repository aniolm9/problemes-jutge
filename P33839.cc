#include <iostream>
using namespace std;

int main() {
    int n, q, r;
    int suma = 0;
    
    while (cin >> n) {
        r = n % 10;
        q = n / 10;
        suma = r;
        while (q >= 1) {
            r = q % 10;
            q = q / 10;
            suma = suma + r;
        }
        cout << "La suma dels digits de " << n << " es " << suma << "." << endl;
    }
}
