int pairs(int k, vector<int> arr) {
    int res = 0;
    int n = arr.size();
    int max = 0;
    for (int i = 0 ; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    if (n*n < max) {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n ; j++) {
                if (arr[i] > arr[j]) {
                    arr[i] = arr[i] + arr[j];
                    arr[j] = arr[i] - arr[j];
                    arr[i] = arr[i] - arr[j];
                }
            }
        }
        int j = 0;
        for (int i = 0; i < n; i++) {
            j = i;
            while ((j < n) && (arr[j]-arr[i] <= k )) {
                if (arr[j]-arr[i] == k) {
                 res++;
                }
                j++;
            }
        }
    }else{
        vector<int> frec(max,0);
        int aux;
        for (int i = 0 ; i < n; i++) {
            aux = arr[i]-1;
            frec[aux]++;
            if (aux - k >= 0) {
                if (frec[aux-k] == 1) {
                res++;
                }
            }
            if (k + aux < max) {
                if (frec[aux+k]==1) {
                res++;
                }
            }
        }
    }
    return res;
}
