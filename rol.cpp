#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
    srand (time(NULL));
    int arma, escudo, danio;
    arma = rand()%6+1;
    arma += rand()%6+1;
    arma += 3;

    escudo = rand()%4+1;
    escudo += rand()%4+1;
    escudo += 1;

    danio = arma - escudo;
  
    if (danio > 0) {
        cout << " el daño es " << danio << endl;
    } else {
        cout << " no sufrio daño "  << endl;
    }
}