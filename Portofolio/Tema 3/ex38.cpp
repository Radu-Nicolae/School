#include <iostream>

using namespace std;

int main() {

    //Fie un vector x de numere intregi. Sa se afiseze toate trimipletele de numere
    //consecutive din x, in care al treilea este media aritmetica intre primul si al doilea

    cout << "Enter n: ";
    int n;
    cin >> n;

    double array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    double first;
    double second;
    double third;

    for (int i = 0; i < n - 2; ++i) {
        first = array[i];
        second = array[i + 1];
        third = array[i + 2];

        if (third == (first + second) / 2){
            cout << "(" << first << ", " << second << ", " << third << ")" << endl;
        }
    }
}