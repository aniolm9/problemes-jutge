#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    double x, c;
    double out = 0;
    
    cin >> x;
    
    int i = 0;
    while (cin.peek() != '\n' or i == 0) {
        cin >> c;
        out = out + pow(x,i)*c;
        i++;
    }
    cout << fixed;
    cout << setprecision(4) << out << endl;
}
    
    
