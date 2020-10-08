#include <iostream>

using namespace std;
#include <string>

int main() {

    //Scrieti un program care elimina toate elementele nule dintr-un vector de numere intregi.

    int n;
    cin >> n;
    int array[n];

    int howManyNulls = 0;

    for (int i = 0; i < n; ++i) {
        if (array[i] == 0){
            howManyNulls++;
        }
    }

    int nulls[n - howManyNulls];
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (array[i] != 0){
            nulls[index] = array[i];
        }
        index++;
    }

    for (int i = 0; i < howManyNulls; ++i) {
        cout << nulls[i];
    }
}
