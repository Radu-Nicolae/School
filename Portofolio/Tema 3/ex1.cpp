//Fiind dat un vector de numere intregi, sa se determine sume elementelor
//pozitive din vector.


    cout << "Enter a number n: ";
    int n;
    int sum = 0;
    cin >> n;

    int array[8] = {23, -3, 23, 53, 1, -2, 21, -5};

    for (int j : array) {
        sum += j;
    }
    
    cout << "Suma este " << sum;