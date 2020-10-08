#include <iostream>

using namespace std;
#include <string>

int main() {

    //Sa se verifice daca un vector contine elemente in ordinea negativ, negativ, pozitiv,
    //negativ, negativ, pozitiv, etc;

    bool doesContain;
    int n;
    cin >> n;
    int array[n];

    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int index = 1;
    int numberOfArray;
    bool isUnder0;
    bool isMoreThan0;

    //1n 2n 3p 4n 5n

    for (int i = 0; i < n; ++i) {
        numberOfArray = array[i];
        if (numberOfArray < 0){
            isUnder0 = true;
        } else {
            isMoreThan0 = true;
        }

        if (index % 3 != 0 && isUnder0){
            doesContain = true;
        } else if (index % 3 == 0 && isMoreThan0){
            doesContain = true;
        } else {
            doesContain = false;
            break;
        }

        index++;
    }

    if (doesContain){
        cout << "It contains!";
    }
    else {
        cout << "It doesn't contain!";
    }
}