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
    int divisor;
    int power;
    int sumFirst;
    int sumSecond;

    while (swapped){
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            first = array[i];
            second = array[i + 1];

            divisor = 2;
            power = 0;
            sumFirst = 0;
            while (first > 1 && divisor <= first / 2){
                while (first % divisor == 0){
                    power++;
                    first /= divisor;
                }
                sumFirst += power;
                divisor++;
            }

            divisor = 2;
            power = 0;
            sumSecond = 0;
            while (second > 1 && divisor <= second / 2){
                while (second % divisor == 0){
                    power++;
                    second /= divisor;
                }
                sumSecond += power;
                divisor++;
            }

            if (sumSecond > sumFirst){
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