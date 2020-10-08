#include <iostream>

using namespace std;
#include <string>

int main() {

    //Se considera un sir de n numere reale. Sa se scrie un program care elimina valorile
    //din sir ce se afla in afara [a, b].

    int n;
    cin >> n;
    float array[n];
    float a = -3.21;
    float b = 24.5;
    float numberOfArray;
    int howMany = 0;

    for (int i = 0; i < n; ++i) {
        cin >> numberOfArray;
        if (numberOfArray >= a && numberOfArray <= b){
            howMany++;
        }
    }

    float newArray[howMany];
    int index = 0;

    for (int i = 0; i < n; ++i) {
        numberOfArray = array[i];
        if (numberOfArray >= a && numberOfArray <= b){
            newArray[index] = numberOfArray;
            index++;
        }
    }

    for (int i = 0; i < howMany; ++i) {
        cout << newArray[i] << endl;
    }
}