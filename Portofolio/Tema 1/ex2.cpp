
//Se citeste un numar natural n < 100 si un sir de n numere intregi. Sa se afiseze
//daca toate elementele ale sirului au acceeasi paritate

#include <iostream>
using namespace std;

int main(){
    int sizeOfArray;
    bool areEven;
    bool areOdd;

    cin >> sizeOfArray;
    int arr[sizeOfArray];

    for (int i; i < sizeOfArray; i++){
        cin >> arr[i];
    }

    for (int i; i < sizeOfArray; i++){
        if (arr[i] % 2 == 0){
            areEven = true;
        }
        else{
            areOdd = true;
        }
    }

    if (areEven == areOdd){
        cout << "The inputs does not have the same parity!";
    }
    else{
        cout << "The inputs have the same parity";
    }
}