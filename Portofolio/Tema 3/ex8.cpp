#include <iostream>

using namespace std;
#include <string>

int main() {

    //Scrieti un program care sa realizeze inversarea unui vector.
    //a) in acelasi vector
    //b) in alt vector

    int n;
    cout << "Enter n: ";
    cin >> n;

    int array[n];
    int copyOfArray[n];
    int newArray[n];
    int input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        array[i] = input;
        copyOfArray[i] = input;
    }

    int numberOfArray;
    int secondNumberOfArray;
    int index;
    for (int i = 0; i < n / 2; ++i) {
        numberOfArray = array[i];
        index = n - i - 1;
        secondNumberOfArray = array[index];
        array[i] = secondNumberOfArray;
        array[index] = numberOfArray;
    }

    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }

    cout << endl << endl;

    for (int i = 0; i < n; ++i) {
        newArray[i] = 0;
    }

    for (int i = n; i > 0; ++i) {
        numberOfArray = copyOfArray[i - 1];
        newArray[i - 1] = numberOfArray;
    }

    for (int i = 0; i < n; ++i) {
        cout << newArray[i];
    }
}