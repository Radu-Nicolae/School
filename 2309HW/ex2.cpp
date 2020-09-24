#include <iostream>
using namespace std;

int main() {
    //Se citeste n si apoi se citesc n numere.
    //Sa se afle cel mai mic multipu comun al numerelor

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
    bool firstTime = true;

    for (int i = 0; i < arraySize; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < arraySize; ++i) {
        if (firstTime){
            firstNumber = array[i];
            secondNumber = array[i + 1];
            firstTime = false;
        } else {
            firstNumber = smallestCommonMultiple;
            secondNumber = array[i + 1];
        }

        firstNumberCopy = firstNumber;
        secondNumberCopy = secondNumber;

        while (firstNumberCopy != secondNumberCopy){
            if (firstNumberCopy > secondNumberCopy){
                firstNumberCopy -= secondNumberCopy;
            } else {
                secondNumberCopy -= firstNumberCopy;
            }
        }

        biggestCommonDivisor = firstNumberCopy;

        smallestCommonMultiple = firstNumber * secondNumber / biggestCommonDivisor;


    }

    cout << "The smallest common multiple is: " << smallestCommonMultiple;

}
