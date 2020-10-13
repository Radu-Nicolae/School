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


    int size;
    if (n % 2 == 0){
        size = n / 2;
    } else {
        size = n / 2 + 1;
    }

    int newArray[size];
    int index = 0;
    
    for (int i = 0; i < n; i += 2) {
        newArray[index] = array[i];
        index++;
    }

    bool swapped;
    int aux;

    while (swapped){
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            if (newArray[i] < newArray[i + 1]){
                aux = newArray[i];
                newArray[i] = newArray[i + 1];
                newArray[i + 1] = aux;
                swapped = true;
            }
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << newArray[i] << "; ";
    }
}