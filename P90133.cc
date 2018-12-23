#include <iostream>
using namespace std;

int main() {
    unsigned int b, n, q, p, x;
    
    while (cin >> b && cin >> n) {
        x = 0;
        q = n % b;
        p = n / b;
        while (p >= 1) {
            q = p % b;
            p = p / b;
            x++;
        }
        cout << x << endl;
    }
}
