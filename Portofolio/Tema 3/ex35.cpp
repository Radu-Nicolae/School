#include <iostream>

using namespace std;

int main() {

    //Se citesc de la tastatura n numere cuprinse intre 0 si 9999. Sa se stabileasca daca exista
    //cifre care nu apar in componenta niciunuia dintre numerele date. Daca exista astfel de cifre
    //se vor afisa. Daca nu, se va afisa un mesaj corespunzator.

    int n;
    cout << "Enter n: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int freqArray[10];

    for (int i = 0; i < 10; ++i) {
        freqArray[i] = 0;
    }

    int numberOfArray;
    int digit;
    for (int i = 0; i < n; ++i) {
        numberOfArray = array[i];

        while (numberOfArray > 0){
            digit = numberOfArray % 10;
            numberOfArray /= 10;
            freqArray[digit]++;
        }
    }

    bool didPrint = false;
    for (int i = 0; i < 10; ++i) {
        if (freqArray[i] == 0){
            cout << i << endl;
            didPrint = true;
        }
    }

    if (!didPrint){
        cout << "There are no such digits!";
    }
}