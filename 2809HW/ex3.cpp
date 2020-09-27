#include <iostream>

using namespace std;

//Cate numere din tabloul x=(x1, x2, ..., xn) de numere intregi au exact k
//divizori proprii.


int main(){

    int sizeOfArray;

    cout << "Enter the size of the array: ";
    cin >> sizeOfArray;

    int arrayOfNumbers[sizeOfArray];
    int personalDivisers;
    int howManyNumbers = 0;
    int divider;
    int howManyPersonalDividers;
    int numberOfArray;

    for (int i = 0; i < sizeOfArray; ++i) {
        cin >> arrayOfNumbers[i];
    }

    cout << "Now enter the number of \"personal\" dividers: ";
    cin >> personalDivisers;

    for (int i = 0; i < sizeOfArray; ++i) {
        numberOfArray = arrayOfNumbers[i];
        divider = 2;
        howManyPersonalDividers = 0;

        while (divider <= numberOfArray /2){
            if (numberOfArray % divider == 0){
                howManyPersonalDividers++;
            }
            divider++;
        }

        if (howManyPersonalDividers == personalDivisers){
            howManyNumbers++;
        }
    }

    cout << "There are " << howManyNumbers << " numbers!";
};