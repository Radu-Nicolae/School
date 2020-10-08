#include <iostream>

using namespace std;
#include <string>

int main() {

    //Se citeste un vector. Sa se separe numerele pare intr-un vector iar cele pare in alt vector.

    int n;
    cin >> n;

    int array[n];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    int odd[100];
    int even[100];
    int numberOfArray;
    int oddIndex = 0;
    int evenIndex = 0;
    
    for (int i = 0; i < n; ++i) {
        numberOfArray = array[i];
        
        if (numberOfArray % 2 == 0){
            odd[oddIndex] = numberOfArray;
            oddIndex++;
        } else {
            even[evenIndex] = numberOfArray;
            evenIndex++;
        }
    }
}