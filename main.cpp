#include <iostream>
#include <string>
using namespace std;
int main() {
    float alto;
    float ancho;
    float area;
    float perimetro;
    cout << "Ingrese el alto " << endl;
    cin >> alto;
    cout << "ingrese el ancho" << endl;
    cin >> ancho;
    area = alto * ancho;
    perimetro = alto *2 + ancho *2;
    cout << "el " << alto << " del alto por el " << ancho << " del ancho equivale a: " << area << " y " << perimetro << endl; 
}