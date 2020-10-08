#include <iostream>

using namespace std;
#include <string>

int main() {

    //Sa se calculeze si sa se afiseze media aritmetica si cea armonica a componentelor unui vector x
    //de numere reale. Prin medie armonica a vectorului se intelege....

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    double average = 0;
    int theOther;

    for (int i = 0; i < n; ++i) {
        average += array[i];
    }

    average /= n;
    cout << "The average is: " << average;

    int sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += 1 / array[i];
    }
    theOther = n / sum;

    cout << "Media armonica este: " << theOther;
}