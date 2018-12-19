#include <iostream>
#include <string>
using namespace std;

bool traspas(int a) {
    int b;
    if (a % 100 == 0) {
        b = a / 100;
        if (b % 4 == 0) {
            return true;
        }
        else { 
            return false;
        }
    }
    
    else {
        if (a % 4 == 0) {
            return true;
    
    }
        else {
            return false;
        }
    }
}

int main() {
    int dia, mes, any;
    
    while (cin >> dia && cin >> mes && cin >> any) {
        if (mes == 2) {
            if (dia == 29 && traspas(any)) cout << "Data Correcta" << endl;
            else if (dia <= 28 && dia >= 1) cout << "Data Correcta" << endl;
            else cout << "Data Incorrecta" << endl;
        }
        else if ((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia >= 1 && dia <= 31)) cout << "Data Correcta" << endl;
        else if ((mes == 4 || mes == 6 || mes == 9 || mes == 11)&& (dia >= 1 && dia <= 30)) cout << "Data Correcta" << endl;
        else cout << "Data Incorrecta" << endl;
        
    }
}
