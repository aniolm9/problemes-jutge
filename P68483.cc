#include <iostream>
#include <string>
using namespace std;

int main() {
    string lang;
    string frase;
    
    while (getline(cin, lang)) {
        getline(cin, frase);
        cout << frase << endl;
    }
}
