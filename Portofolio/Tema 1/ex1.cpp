//se citeste un numar natural nenul n < 100 si un sir de n numere intregi.
//sa se verifice daca in sirul de numere exista un numar impar si sa se afiseze un mesaj 
//in consecinta

#include <iostream>
using namespace std;

int main(){
    int sizeOfArray;
    bool doesExist;
    int input;

    cout << "Enter a number n: ";
    cin >> sizeOfArray;

    int arr[sizeOfArray];
    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> input;
        arr[i] = input;
    }

    for (int i = 0; i < sizeOfArray; i++){
        if (arr[i] % 2 == 1)
        {
            doesExist = true;
        }
    }

    if (doesExist){
        cout << "There is at least one odd number!";
    }
    else {
        cout << "There isn't any odd number!";
    }

}