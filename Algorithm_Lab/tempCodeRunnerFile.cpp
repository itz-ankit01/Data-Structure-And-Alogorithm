int n = 15;
    int lb = 10, ub = 100;
    int arr[n];
    for(int i=0; i<n; i++){
        int a = (rand() % (ub - lb + 1)) + lb;
        arr[i] = a;
    }