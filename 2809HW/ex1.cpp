#include <iostream>

using namespace std;

int main() {
    //La codificarea unui text scris cu cel mult primele n litere mici ale alfabetului englez,
    //se folosesc cele mai mici n numere naturale care au exact 3 divizori naturali. Pentru litera
    //'a' se foloseste cel mai mic numar cu proprietatea respectiva, pentru 'b' cel mai mic numar diferit
    //de cel folosit pentru 'a' si asa mai departe

    //exemplu: n = 5;
    //text = "abeaab";

    //output: 4, 9, 25, 29, 121

    string input;
    int primeNumber;
    bool isPrime;
    bool foundPrime;
    int diviser;
    int number = 2;

    cout << "Enter a string: ";
    cin >> input;

    for (int i = 0; i < input.length(); ++i) {
        foundPrime = false;
        while (!foundPrime) {
            diviser = 2;
            isPrime = true;

            while (diviser <= number / 2) {
                if (number % diviser == 0) {
                    isPrime = false;
                    break;
                } else {
                    diviser++;
                }
            }


            if (isPrime) {
                foundPrime = true;
                primeNumber = number * number;
                cout << primeNumber << ", ";
            }
            number++;
        }

    }


}
