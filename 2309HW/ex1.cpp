#include <iostream>
using namespace std;

int main() {
    //Se citeste n si apoi se citesc n numere.
    //Sa se afle cel mai mare divizor comun al numerelor

    int n;
    cout << "Enter n: ";
    cin >> n;

    int array[n];
    int arraySize = n;
    int biggestCommonDivisor;
    int firstNumber;
    int secondNumber;
    bool firstTime = true;

    for (int i = 0; i < arraySize; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < arraySize; ++i) {
        if (firstTime) {
            firstNumber = array[i];
            firstTime = false;
        } else {
            firstNumber = biggestCommonDivisor;
        }
        if (i == (arraySize - 1)){
            break;
        }
        secondNumber = array[i + 1];

        while (firstNumber != secondNumber){
            if (firstNumber > secondNumber){
                firstNumber = firstNumber - secondNumber;
            } else {
                secondNumber = secondNumber - firstNumber;
            }
        }

        biggestCommonDivisor = firstNumber;
    }

    cout << "The biggest common divisor is: " << biggestCommonDivisor;

}
