    //Sa se scrie un program care numara numerele pozitive, negative si nule dintr-un vector,
    //parcurgandu-l o singura data;

    int array[15] = {-1, -23, -23, 453, 54, 534, 12, 2, 4, 0, 0, 0, -53, -51, 24};
    int numberOfArray;
    int over0 = 0;
    int under0 = 0;
    int zero = 0;

    for (int i : array) {
        numberOfArray = i;
        if (numberOfArray > 0){
            over0++;
        } else if (numberOfArray < 0){
            under0++;
        } else {
            zero++;
        }
    }

    cout << "There are " << over0 << " numbers bigger than 0" << endl;
    cout << "There are " << under0 << " numbers smaller than 0" << endl;
    cout << "There are " << zero << " equal to 0";