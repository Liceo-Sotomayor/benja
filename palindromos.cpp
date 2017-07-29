#include <iostream>
#include <string>
using namespace std;
int main() {
    string palabra;
    cout << " ingrese una palabra" << endl;
    cin >> palabra;
    for (int i=0 ; i < palabra.size() ; i++) {
        cout << palabra [i] << endl;
    }
}