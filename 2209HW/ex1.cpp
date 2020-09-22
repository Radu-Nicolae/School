#include <iostream>
using namespace std;

int main() {
    //Se citeste un numar n, se citesc n numere.

    //a) sa se afiseze cate numere palindrom au fost gasite
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << " " << endl;
    int sizeOfArray = n;
    int array[sizeOfArray];
    int howMany = 0;
    int numberOfArray;
    int copyOfNumber;
    int newNumber;
    int index = 1;

    for (int i = 0; i < sizeOfArray; ++i) {
        cout << "Enter the " << index << " number: ";
        cin >> array[i];
        index++;
    }

    for (int i = 0; i < sizeOfArray; ++i) {
        newNumber = 0;
        numberOfArray = array[i];
        copyOfNumber = numberOfArray;

        while (numberOfArray >= 1){
            newNumber = newNumber * 10 + numberOfArray % 10;
            numberOfArray /= 10;
        }

        if (newNumber == copyOfNumber){
            howMany++;
        }
    }

    cout << " " << endl;
    cout << "There are " << howMany << " palindrome numbers!";


    //b) Sa se afiseze numerele a caror suma a cifrelor este maxima

    int maxSum = 0;
    int sum;

    for (int i = 0; i < sizeOfArray; ++i) {
        sum = 0;
        numberOfArray = array[i];

        while (numberOfArray > 0){
            sum += numberOfArray % 10;
            numberOfArray /= 10;
        }

        if (sum > maxSum){
            maxSum = sum;
        }
    }

    cout << endl;
    cout << "The number(s) with the biggest digits sum is (are): ";
    cout << endl;

    for (int i = 0; i < sizeOfArray; ++i) {
        sum = 0;
        numberOfArray = array[i];
        copyOfNumber = array[i];

        while (numberOfArray > 0){
            sum += numberOfArray % 10;
            numberOfArray /= 10;
        }

        if (sum == maxSum){
            cout << " -> " << copyOfNumber << endl;
        }
    }


    //c) sa se afiseze cate perechi de numere citite consecutiv sunt prime intre ele
    int nextNumberOfArray;
    int remain;
    howMany = 0;

    int j = 1;
    for (int i = 0; i < sizeOfArray; ++i) {
        numberOfArray = array[i];
        nextNumberOfArray = array[j];

        remain = numberOfArray % nextNumberOfArray;

        while (remain != 0){
            numberOfArray = nextNumberOfArray;
            nextNumberOfArray = remain;
            remain = numberOfArray % nextNumberOfArray;
        }

        if (nextNumberOfArray == 1){
            howMany++;
        }
        if (i == sizeOfArray - 1){
            break;
        }
        j++;
    }

    cout << endl;
    cout << "There are " << howMany << " prime numbers between them.";


}
