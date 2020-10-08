#include <iostream>

using namespace std;

///Pentru un text de la tastatura se cere codificarea textului, fiecare caracter fiind inlocuit
///cu numarul corespunzator si orice doua coduri consecutive vor fi separate printr-un spatiu
///exemplu: n = 5;
///text = "abeaab";
///
///output: 4, 9, 121, 4, 4, 9;

int main(){
    string input;

    cout << "Enter a string: ";
    cin >> input;

    char inputArray[input.size()];
    int numberOfArray = 2;
    int diviser;
    int howManyPrimeNumbers = 0;
    bool isPrime;
    int index = 0;



    for (int i = 0; i < input.size(); ++i) {
        inputArray[i] = input.at(i);


        diviser = 2;
        isPrime = true;
        while (diviser <= numberOfArray / 2){
            if (numberOfArray % diviser == 0){
                isPrime = false;
                break;
            } else {
                isPrime = true;
                diviser++;
            }
        }

        if (isPrime){
            howManyPrimeNumbers++;
        }

        numberOfArray++;

    }

    numberOfArray = 2;
    int primeNumbers[howManyPrimeNumbers];


    while (index < howManyPrimeNumbers){
        diviser = 2;
        isPrime = true;

        while (diviser <= numberOfArray / 2){
            if (numberOfArray % diviser == 0){
                isPrime = false;
                break;
            } else {
                isPrime = true;
                diviser++;
            }
        }

        if (isPrime){
            primeNumbers[index] = numberOfArray;
            index++;
        }

        numberOfArray++;

        if (index == howManyPrimeNumbers){
            break;
        }
    }

    string differentLetters[1000];
    string letter;
    string letterOfArray;
    index = 0;
    bool doesContain;

    for (int i = 0; i < input.length(); ++i) {
        letter = input.at(i);
        doesContain = false;

        for (int j = 0; j < 1000; ++j) {
            letterOfArray = differentLetters[j];
            if (letterOfArray == letter) {
                doesContain = true;
                break;
            }
        }

        if (!doesContain) {
            differentLetters[index] = letter;
            index++;
        }

    }

    



}






//bool containsElement(int numbers[], int sizeOfArray, int numberToBeVerified){
//    bool doesArrayContain = false;
//
//    for (int i = 0; i < sizeOfArray; ++i) {
//        if (numberToBeVerified == numbers[i]){
//            doesArrayContain = true;
//        }
//    }
//
//    return doesArrayContain;
//}
//
//
//bool containsChar(char chars[], int sizeOfArray, char c){
//    bool doesArrayContain = false;
//
//    for (int i = 0; i < sizeOfArray; ++i) {
//        if (c == chars[i]){
//            doesArrayContain = true;
//        }
//    }
//
//    return doesArrayContain;
//}
//
//
//int main() {
//    //Pentru un text de la tastatura se cere codificarea textului, fiecare caracter fiind inlocuit
//    //cu numarul corespunzator si orice doua coduri consecutive vor fi separate printr-un spatiu
//
//    //exemplu: n = 5;
//    //text = "abeaab";
//
//    //output: 4, 9, 121, 4, 4, 9;
//
//    string input;
//    int primeNumber;
//    bool isPrime;
//    bool foundPrime;
//    int diviser;
//    int number = 2;
//    bool doesContainNumber;
//    int sizeOfNumbers = 0;
//
//    cout << "Enter a string: ";
//    cin >> input;
//
//    char letters[input.size()];
//    int numbers[input.size()];
//    char uniqueLetters[input.size()];
//
//
//    for (int i = 0; i < input.size(); ++i) {
//        letters[i] = input.at(i);
//    }
//
//
//
//    for (int i = 0; i < input.length(); ++i) {
//        foundPrime = false;
//        while (!foundPrime) {
//            diviser = 2;
//            isPrime = true;
//
//            while (diviser <= number / 2) {
//                if (number % diviser == 0) {
//                    isPrime = false;
//                    break;
//                } else {
//                    diviser++;
//                }
//            }
//
//            doesContainNumber = containsElement(numbers, input.size(), number);
//
//            if (!doesContainNumber){
//                numbers[sizeOfNumbers] = number;
//                sizeOfNumbers++;
//            }
//
//
//
//        }
//
//    }
//
//}
//
//
