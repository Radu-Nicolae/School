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
    int smallestCommonMultiple;
    int firstNumber;
    int firstNumberCopy;
    int secondNumber;
    int secondNumberCopy;
    int product = 1;
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

        firstNumberCopy = firstNumber;
        secondNumberCopy = secondNumber;

        while (firstNumber != secondNumber){
            if (firstNumber > secondNumber){
                firstNumber = firstNumber - secondNumber;
            } else {
                secondNumber = secondNumber - firstNumber;
            }
        }

        biggestCommonDivisor = firstNumber;

    }

    for (int i = 0; i < arraySize; ++i) {
        product *= array[i];
    }

    smallestCommonMultiple = product / biggestCommonDivisor;

    cout << "The smallest common multiple is: " << smallestCommonMultiple;

    //ummm... .?
}
