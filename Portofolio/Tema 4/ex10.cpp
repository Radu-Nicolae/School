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

    bool swapped = true;
    int aux;
    int first;
    int second;
    int sumFirst;
    int sumSecond;

    while (swapped){
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            first = array[i];
            second = array[i + 1];

            while (first > 0){
                sumFirst = first % 10;
                first /= 10;
            }

            while (second > 0){
                sumSecond = second % 10;
                second /= 10;
            }

            if (sumFirst > sumSecond){
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