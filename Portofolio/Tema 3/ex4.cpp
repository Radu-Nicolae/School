 //Se considera un vector A cu m elemente si doua numere reale P si Q. Sa se scrie un program
    //care copiaza intr-un vector B toate elementele din A alfate in intervalul (P, Q), in ordinea
    //in care apar ele in vectori.

    int m;
    int A[m];
    float P;
    float Q;
    int B[m];

    for (int i = 0; i < m; ++i) {
        if (A[i] > P && A[i] < Q){
            B[i] = A[i];
        }
    }