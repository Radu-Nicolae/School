#include <iostream>

using namespace std;
#include <string>

int main() {

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int sum;
    int divisor;
    int howManyNumbers = 0;
    int numberOfArray;

    for (int i = 0; i < n; ++i) {
        numberOfArray = array[i];
        divisor = 2;
        sum = 1;
        while (divisor <= numberOfArray / 2){
            if (numberOfArray % divisor == 0){
                sum += divisor;
            }
            divisor++;
        }
        if (numberOfArray == sum){
            howManyNumbers++;
        }
    }

    cout << "There are " << howManyNumbers << " perfect numbers!";
}