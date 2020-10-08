#include <iostream>

using namespace std;

int main() {

    //Se da un vector x cu n > 2 componente numere intregi. Sa se insere intre fiecare doua
    //elemente ale acestui vector media aritmetica a celorlalte n - 2 componente ale vectorului.

    //initial (1, 2, 3, 4)
    //final (1, 3.5, 2, 2.5, 3, 1.5, 4)

    int n;
    cout << "Enter n: ";
    cin >> n;

    double x[n];
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }

    double newArray[n - 1];
    double mean;

    for (int i = 0; i < n; ++i) {
        if (i < n - 1) {
            mean = x[i] + x[i + 1];
            mean /= 2;
            newArray[i] = mean;
        }
    }

    double fullArray[n - 1 + n];
    int index = 0;

    for (int i = 0; i < (2 * n - 1); ++i) {
        fullArray[index] = x[i];
        index++;
        fullArray[index] = newArray[n - i - 2];
        index++;

    }

    for (int i = 0; i < (2 * n - 1); ++i) {
        cout << fullArray[i] << endl;
    }
}