#include <iostream>

using namespace std;

int main() {

    //Se considera un vector A cu n componente intregi. Sa se modifice vectorul astfel incat
    //primele m componente sa apara in final pe ultimele m pozitii, iar ultimele n-m componente
    //sa apara pe primele pozitii. Numarul m se citeste de la tastatura.

    int n;
    cout << "Enter n: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int m;
    cout << "Enter m: ";
    cin >> m;


    int newArray[n];
    for (int i = 0; i < m; ++i) {
        newArray[n - i - 1] = A[i];
    }

    int index = 0;
    for (int i = m; i < n; ++i) {
        newArray[index] = A[i];
        index++;
    }

    for (int i = 0; i < n; ++i) {
        cout << newArray[i] << endl;
    }
}