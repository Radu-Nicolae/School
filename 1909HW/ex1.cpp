//se citeste un numar natural nenul n < 100 si un sir de n numere intregi. 
//sa se verifice daca in sirul de numere exista un numar impar si sa se afiseze un mesaj 
//in consecinta

#include <iostream>
using namespace std;

int main(){
    int n;
    bool doesExist;
    int input;

    cout << "Enter a number n: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr[i] = input;
    }

    for (int i = 0; i < sizeof(arr); i++){
        if (arr[i] % 2 == 0)
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