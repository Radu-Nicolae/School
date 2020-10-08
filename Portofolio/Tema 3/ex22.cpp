#include <iostream>

using namespace std;
#include <string>

int main() {

    //Se da un vector cu n elemente intregi. Fara a folosi un vector auxiliar, sa se mute la
    //sfarsitul lui v elementele sale nule pastrand ordinea celorlale elemente.

    int n;
    cout << "Enter n: ";
    cin >> n;

    int v[n];
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    bool didChange = true;

    do{
        didChange = false;
        for (int i = 0; i < n - 1; ++i) {
            if (v[i] == 0 && v[i + 1] != 0){
                v[i] += v[i + 1];
                v[i + 1] = v[i] - v[i + 1];
                v[i] = v[i] - v[i + i];
                didChange = true;
            }
        }
    } while (didChange);

    for (int i = 0; i < n; ++i) {
        cout << v[i];
    }