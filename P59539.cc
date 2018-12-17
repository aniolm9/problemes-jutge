#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double out = 0.0000;
    cin >> n;
    for (double i = 1; i <= n; i++) {
        out = out + 1/i;
    }
    cout << fixed << setprecision(4) << out << endl;

}