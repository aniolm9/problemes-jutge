#include <iostream>
#include <string>
using namespace std;

int main() {
    string d;
    int i = 0;
    int x = 0;
    int y = 0;
    
    cin>>d;
    
    for (i = 0; i<d.size(); i++) {
        if (d[i] == 'n') y--;
        else if (d[i] == 's') y++;
        else if (d[i] == 'e') x++;
        else if (d[i] == 'o') x--;
        
    }
    
    cout<<'('<<x<<", "<<y<<')'<<endl;
}
