#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter n:";
    cin >> n;

    int array[n];
    int howManyOdds = 0;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
        if (array[i] % 2 == 1){
            howManyOdds++;
        }
    }

    int index = 0;
    int odds[howManyOdds];
    for (int i = 0; i < n; ++i) {
        if (array[i] % 2 == 1){
            odds[index] = array[i];
            index++;
        }
    }

    bool swapped = true;
    int aux;

    while (swapped){
        swapped = false;
        for (int i = 0; i < howManyOdds - 1; ++i) {
            if (odds[i] > odds[i + 1]){
                aux = odds[i];
                odds[i] = odds[i + 1];
                odds[i + 1] = aux;
                swapped = true;
            }
        }
    }

    for (int i = 0; i < howManyOdds; ++i) {
        cout << odds[i] << "; ";
    }
}