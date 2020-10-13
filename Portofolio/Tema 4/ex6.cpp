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
    int biggestDigitFirst = 0;
    int biggestDigitSecond = 0;
    int first;
    int second;

    while (swapped){
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            first = array[i];
            second = array[i + 1];
            while (first > 10){
                if (first % 10 > biggestDigitFirst){
                    biggestDigitFirst = first % 10;
                }
                first /= 10;
            }
            while (second > 10){
                if (second % 10 > biggestDigitSecond){
                    biggestDigitSecond = second % 10;
                }
                second /= 10;
            }
            if (biggestDigitFirst > biggestDigitSecond){
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                swapped = true;
            }

            biggestDigitFirst = 0;
            biggestDigitSecond = 0;
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << array[i] << "; ";
    }
}
