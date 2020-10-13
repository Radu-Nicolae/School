#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter n:";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }


    int half;
    if (n % 2 == 0){
        half = n / 2;
    } else {
        half = n / 2 + 1;
    }

    bool swapped;
    int aux;

    while (swapped){
        swapped = false;
        for (int i = 0; i < half - 1; ++i) {
            if (array[i] > array[i + 1]){
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                swapped = true;
            }
        }
    }

    swapped = true;
    while (swapped){
        swapped = false;
        for (int i = half; i < n - 1; ++i) {
            if (array[i] < array[i + 1]){
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                swapped = true;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << array[i] << "; ";
    }
}