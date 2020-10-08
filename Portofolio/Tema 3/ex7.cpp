#include <iostream>

using namespace std;
#include <string>

int main() {

    //Sa se calculeze media aritmetica si media armonica a componentelor unui vector.

    int n;
    cout << "Enter n: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    double average = 0;
    for (int i = 0; i < n; ++i) {
        average += array[i];
    }

    cout << "Media aritmetica este: " << average / n;
    cout << endl;

    float sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += 1 / array[i];
    }

    int otherMedium;
    otherMedium = n / sum;

    cout << "Media armonica este: " << otherMedium;
}