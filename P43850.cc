#include <iostream>
using namespace std;

int main() {
    int input, guess;
    
    while (cin >> input) {
        guess = ((((input/5)-9)/4)-6)/5;
        cout << guess << endl;
    }
}
