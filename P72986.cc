#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, a;
    double b = 0;
    
    cin >> x;
    
    int i = 0;
    while (cin.peek() != '\n' || i == 0) {
        cin >> a;
        b = b*x + a;
        i=1;
    }
    cout << fixed << setprecision(4) << b << endl;
}
