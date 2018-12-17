#include <iostream>
#include <string>
using namespace std;

int main() {
    string s("");
    int a = 0;
    
    getline(cin, s);
    
    for (int i = 0; i<s.size(); i++) {
        if (s[i] == 'a') a++;
    }
    cout<<a<<endl;
}
