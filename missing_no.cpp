int missingNumber(int arr[], int n) {
    int expected = n * (n + 1) / 2;
    int actual = 0;

    for (int i = 0; i < n; i++) {
        actual += arr[i];
    }

    return expected - actual;
}
