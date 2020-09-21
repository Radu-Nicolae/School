
//Se citeste un numar n si apoi un sir de n numere intregi

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //a) Sa se verifice daca exista numere prime

    bool arePrime;
    int divider;
    int numberOfArray;

    for (int i = 0; i < n; i++){
        divider = 2;
        numberOfArray = arr[i];

        while (divider <= numberOfArray / 2){
            if (numberOfArray % divider == 0){
                arePrime = true;
                break;
            }
            divider++;
        }

        if (arePrime){
            break;
        }
    }

    if (arePrime)
    {
        cout << "There is at least one prime number!" << endl;
    }
    else {
        cout << "There is no prime number in the array!" << endl;
    }


    //b) Sa se verifice daca exista cel putin 3 elemente consecutive cu aceeasi paritate

    int threeTimes = 0;
    for (int i = 0; i < n; i++){
        numberOfArray = arr[i];

        if (numberOfArray % 2 == 0)
        {
            threeTimes++;
        }
        else
        {
            threeTimes = 0;
        }
    }

    if (threeTimes == 3)
    {
        cout << "There are at least 3 numbers with the same parity" << endl;
    }
    else{
        threeTimes = 0;
        for (int i = 0; i < n; i++){
            numberOfArray = arr[i];

            if (numberOfArray % 2 == 1)
            {
                threeTimes++;
            }
            else
            {
                threeTimes = 0;
            }
        }
        if (threeTimes >= 3)
        {
            cout << "There are at least 3 numbers with the same parity" << endl;
        } else {
            cout << "There aren't at least 3 numbers with the same parity" << endl;
        }
    }


    //c) Sa se verifice daca elementele sirului sunt ordonate crescator

    bool areGrowing = true;

    for (int i = 1; i < n; i++){
        if (arr[i] <= arr[i-1])
        {
            areGrowing = false;
        }
    }

    if (areGrowing)
    {
        cout << "The numbers are growing" << endl;
    }
    else{
        cout << "The numbers aren't growing" << endl;
    }


    //d) Sa se verifice daca elementele pare ale sirului sunt ordonate crescator

    areGrowing = true;
    bool firstTime = true;
    int prevOdd;

    for (int i = 0; i < n; i++)
    {
        if (firstTime){
            for (int j = 0; j < n; i++){
                numberOfArray = arr[j];
                if (numberOfArray % 2 == 0)
                {
                    j = sizeof(arr);
                }
            }
            firstTime = !firstTime;
        }

        if (!firstTime){
            numberOfArray = arr[i];
            if (numberOfArray % 2 == 0)
            {
                if (numberOfArray <= prevOdd)
                {
                    areGrowing = false;
                    i = sizeof(arr);
                }
                else{
                    prevOdd = numberOfArray;
                }
            }
        }
    }

    if (areGrowing)
    {
        cout << "The even number are growing" << endl;
    }
    else {
        cout << "The even numbers are not growing!" << endl;
    }



}