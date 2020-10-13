#include <iostream>

using namespace std;

int main() {

    int n;
    cout << "Enter n:";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    bool swapped = true;
    int aux;
    int divisorFirst;
    int divisorSecond;
    int prime;
    int first;
    int second;
    bool foundIt;

    while (swapped){
        swapped = false;
        for (int i = 0; i < n - 1; ++i) {
            first = array[i];
            second = array[i + 1];

            divisorFirst = first / 2;
            while (divisorFirst <= first / 2){
                prime = 2;
                if (first % divisorFirst == 0){
                    while (prime <= divisorFirst / 2){
                        if (divisorFirst % prime == 0){
                            foundIt = true;
                        }
                        prime++;
                    }
                }
                if (foundIt){
                    break;
                } else {
                    divisorFirst++;
                }
            }

            divisorSecond = second / 2;
            while (divisorSecond <= second / 2){
                prime = 2;
                if (second % divisorSecond == 0){
                    while (prime <= divisorSecond / 2){
                        if (divisorSecond % prime == 0){
                            foundIt = true;
                        }
                        prime++;
                    }
                }
                if (foundIt){
                    break;
                } else {
                    divisorSecond++;
                }
            }

            if (divisorSecond > divisorFirst){
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                swapped = true;
            }

        }
    }

    for (int i = 0; i < n; ++i) {
        cout << array[i] << "; ";
    }
}