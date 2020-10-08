//Sa se afiseze elementele pozitive de rang impar dintr-un vector de numere intregi.

    int n;
    int numberOfArray;

    int array[10] = {23, 4, -42, 1, 2, -9, 78, 64, 53, 11};

    for (int i : array) {
        numberOfArray = i;
        if (numberOfArray % 2 == 1 && numberOfArray > 0){
            cout << numberOfArray << endl;
        }
    }