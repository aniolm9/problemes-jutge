#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<double> sortides;
    double mida1, mida2;
    string figura;
    
    cin >> n;
    for (int i = 0; i<n; i++)  {
        cin >> figura;
        cin >> mida1;
        if (figura == "rectangle") {
            cin >> mida2;
            sortides.push_back(mida1*mida2);
        }
        else if (figura == "cercle") {
            sortides.push_back(mida1*mida1*M_PI);
        }
    }
    
    for (int i = 0; i<n; i++) {
        cout << fixed;
        cout << sortides.at(i) << setprecision(6) << endl;
    }
}
